#include <stdio.h>

//void Imprime( int*, int );
int QtdePico( int*, int );

int main( ) {
	int h[10001], n, i, p;
	
	while( 1 ) {
		scanf( "%d", &n );
		
		if( n == 0 ) break;
		
		p = 0;
		for ( i=0; i<n; i++ ) {
			scanf( "%d", &h[i] );
			p++;
		}
		
		h[p] = h[0];
		h[p + 1] = h[1];
		printf( "%d\n", QtdePico(h, p+1) );
	
	}
	
	return 0;
}

/*void Imprime( int *arr, int length ) {
	int i;
	for ( i=0; i<=length; i++ ) {
		printf( "%d ", arr[i] );
	}
	printf("\n");
}*/

int QtdePico( int *h, int p ) {
	int qtdePico = 0, i, 
		aux01, aux02, aux03;
	
		
	for ( i=0; i<=(p-2); i++ ) {
		aux01 = h[i];
		aux02 = h[i+1];
		aux03 = h[i+2];
		
		if( (aux02 > aux01 && aux02 > aux03) || 
			(aux02 < aux01 && aux02 < aux03)
		  ) {
			qtdePico++;  
		  }
	}
	
	return qtdePico;
}


/* OBS: UM PICO EH B>A e B>C ou B<A e B<C */