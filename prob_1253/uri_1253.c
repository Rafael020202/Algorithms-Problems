#include <stdio.h>
#include <string.h>

int main() {
	int nC, nV, i, j;
	
	scanf( "%d", &nC );
	
	for ( i = 0; i < nC; i++ ) {
		char cifra[51];
		
		scanf( "%s", cifra );
		scanf( "%d", &nV );
		
		for ( j = 0; j < strlen(cifra); j++  ) {
			cifra[j] -= nV;
			
			if ( cifra[j] < 'A' )
				printf( "%c", cifra[j] + 26 );
			else
				printf( "%c", cifra[j] );
		}
		
		printf( "\n" );
		
	}
	
	return 0;
}