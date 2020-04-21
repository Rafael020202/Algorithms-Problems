#include <stdio.h>
#include <string.h>

int values[120];

int MDC( int,int );

int main( ) {
	int n01, n02;
	int	i, aux, qtde;

	qtde = 0;
	
	while( scanf("%d %d", &n01, &n02) != EOF ) {
		
		aux = MDC( n01, n02 );
		
		values[qtde] = aux;
		qtde++;
		
		if( aux > 5 ) printf( "Noel\n" );
		else printf( "Gnomos\n" );
	}
	for ( i=(qtde-1); i >= 0; i-- )
		printf( "%d ", values[i] );
	printf("\n");
	
	return 0;
}

int MDC( int n01, int n02 ) {
	if( n01%n02 == 0 ) return n02;
	return MDC( n02, n01%n02 );
}
