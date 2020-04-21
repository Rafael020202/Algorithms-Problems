#include <stdio.h>
#include <string.h>

int main( ) {
	
	int i, j, nC;
	
	i = 0;
	j = 0;
	
	scanf( "%d", &nC );
	
	for ( j; j < nC; j++ ) {
		char str01[51], str02[51];
		
		scanf( "%s %s", str01, str02 );
		
		while ( str01[i] != '\0' && str02[i] != '\0' ) {
			printf( "%c%c", str01[i], str02[i] );
			i++;
		}
		
		if ( i < strlen(str02)  ) {	
			while ( i < strlen(str02) ) {
				printf( "%c", str02[i] );
				i++;
			}
		}
		else if ( i < strlen(str01)  ) {	
			while ( i < strlen(str01) ) {
				printf( "%c", str01[i] );
				i++;
			}
		}
		printf( "\n" );
		
		i = 0;
	}
	
	return 0;
}