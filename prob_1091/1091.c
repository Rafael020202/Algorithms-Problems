#include <stdio.h>

typedef struct coordenada {
	int x, y; 
} Ponto;

int main( ) {
	int k, i;
	Ponto p1, p2;
	
	while( 1 ) {
		scanf( "%d", &k );
		
		if( k == 0 ) break;
		
		scanf( "%d %d", &p1.x, &p1.y );
	
		for ( i=0; i<k; i++ ) {
			scanf( "%d %d", &p2.x, &p2.y );
			
			if( p2.x > p1.x && p2.y > p1.y )
				printf( "NE\n" );
			else if( p2.x < p1.x && p2.y > p1.y )
				printf( "NO\n" );
			else if( p2.x > p1.x && p2.y < p1.y )
				printf( "SE\n" );
			else if( p2.x < p1.x && p2.y < p1.y )
				printf( "SO\n" );
			else
				printf( "divisa\n" );
			
		}
	}
		
	
	return 0;
}