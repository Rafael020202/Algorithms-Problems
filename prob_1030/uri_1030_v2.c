#include <stdio.h>

int main( ) {
	long long int nC, n, k, i, j, aux;
	
	j = 0;
	
	scanf( "%lli", &nC );
	
	while ( nC-- ) {
		scanf( "%lli %lli", &n, &k );
		
		for ( i = 0; i < n; i++ ) {
			aux = i * k;
			
			while ( aux > n ) { 
				aux = ( (k * (aux-n) - 1)/(k-1) );
			}
			
			printf( "Case %lli: %lli\n", j++, aux  );
		} 
		
	}	
	
	return 0;
}