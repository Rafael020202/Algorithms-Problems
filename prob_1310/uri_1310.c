#include <stdio.h>

int Max( int,int );

int main( ) {
	int i, n, aux; 
	int taxa, somaAtual, melhorSoma;
	
	while ( scanf("%d", &n) != EOF ) {
		somaAtual = 0;
		melhorSoma = 0;
		
		scanf("%d", &taxa);
		
		for ( i=0; i<n; i++ ) {
			scanf( "%d", &aux );
			
			aux -= taxa;
			somaAtual = Max(0, somaAtual + aux);
			melhorSoma = Max(melhorSoma, somaAtual);
		}
		
		printf( "%d\n", melhorSoma );
	}
	
	return 0;
}

int Max( int n01, int n02 ) {
	if( n01 > n02 ) return n01;
	else return n02;
}