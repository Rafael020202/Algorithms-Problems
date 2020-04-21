#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1

//int printArray( int nums[10], int );
int countCarrys( int, int, int*, int* );

int main() {	
	int aux, iA = 0, iB = 0;
	char str1[10], str2[10];
	int num01[10], num02[10];
	
	while ( TRUE ) {	
		scanf("%s %s", str1, str2);

		if( !strcmp(str1, "0") && !strcmp(str2, "0") )
			break;
		
		iA = strlen(str1);
		iB = strlen(str2);
		
		for( aux = 0; aux < iA; aux++ ) 
			num01[aux] = str1[aux] - '0';
		
		for( aux = 0; aux < iB; aux++ ) 
			num02[aux] = str2[aux] - '0';

		aux = countCarrys( iA, iB, num01, num02 );

		if( aux > 1 )
			printf( "%d carry operations.\n", aux );
		else if( aux == 1 )
			printf( "%d carry operation.\n", aux );
		else	
			printf( "No carry operation.\n" );	
	}
		
	return 0;
}


/*int printArray( int nums[10], int tam ) {
	int c;
	for ( c = 0; c < tam; c++ ) {
		printf( "%d ", nums[c] );
	}
	printf("\n");
}*/

int countCarrys( int iA, int iB, int num01[10], int num02[10] ) {
	int aux, carry = 0;
	
	iA -= 1;
	iB -= 1;
	while ( iA >= 0 && iB >= 0 ) {
		aux = num01[iA] + num02[iB];

		if ( aux >= 10 ) {
			if(iA > iB)
				num01[iA - 1]++;
			else
				num02[iB - 1]++;
			carry++;
		}
		iA--;
		iB--;
	}

	if( iA >= 0 ) { 
		for( aux = iA; aux >= 0; aux-- ) {
			if( num01[aux] >=10 ) {
				num01[ aux - 1 ]++;
				carry++;
			}	
		}
	}else if( iB >= 0 ) { 
		for( aux = iB; aux >= 0; aux-- ) {
			if( num02[aux] >= 10 ) {
				num02[ aux - 1 ]++;
				carry++;
			}
		}
	}

	return carry;
}