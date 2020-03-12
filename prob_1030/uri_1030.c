#include <stdio.h>
#include <stdlib.h>

typedef struct soldado { 
	int id;
	int estado;
} Soldado;

int main( ) {
	
	int nc, n, k, i, j, qtde, cont, aux;

	scanf( "%d", &nc );
	
	for ( j = 0; j<nc; j++ ) {
		Soldado sld[10001];
		
		qtde = 0;
		cont = 0;
		
		scanf( "%d %d", &n, &k );
		
		for ( i=0; i<n; i++ ) {
			sld[i].id = i+1;
			sld[i].estado = 1;
			qtde++;
		}
		
		aux = n;
		
		while ( qtde > 1 ) {
			i = 0;
			while ( i<k ) {
				
				if( cont >= aux )
					cont -= aux;
				
				if ( sld[cont].estado != 0 ) {
					cont++;
					i++;
				}else {
					cont++;
				}
			}
					
			sld[cont - 1].estado = 0;
			qtde--;
		}
		
		for ( i=0; i < aux; i++ ) {
			if( sld[i].estado != 0 ) {
				printf( "Case %d: %d\n", j+1, sld[i].id );
				break;
			}
		}
		
	}
	
	return 0;
}


