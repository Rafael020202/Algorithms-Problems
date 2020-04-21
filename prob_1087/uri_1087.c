#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
	int x, y;
} PONTO;

int diag, cima, baixo, esq, dir;
void QtdeMov( int, int, PONTO );

int main( ) {
	PONTO pI, pF;
	int qtde;
	
	while( 1 ) { 
		diag = 0;
		cima = 0;
		baixo = 0;
		esq = 0;
		dir = 0;
		
		scanf( "%d %d %d %d", &pI.x, &pI.y, &pF.x, &pF.y );
		
		if( (pI.x == 0 && pI.y == 0) && (pF.x == 0 && pF.y == 0) )
			break;
			
		QtdeMov( pI.x, pI.y, pF );
		qtde = diag + baixo + cima + esq + dir;
		printf( "%d\n", qtde );
	}
	return 0;
}

void QtdeMov( int x, int y, PONTO pF ) {
	if( x == pF.x && y == pF.y )
		return;
	else 
		if( x > pF.x && y > pF.y ) {
			diag = 1;
			return( QtdeMov(x-1, y-1, pF) );
		}
		else 
			if( x < pF.x && y > pF.y ) {
				diag = 1;
				return( QtdeMov(x+1, y-1, pF) );
			}
			else 
				if( x > pF.x && y < pF.y ) {
					diag = 1;
					return( QtdeMov(x-1, y+1, pF) );
				}
				else 
					if( x < pF.x && y < pF.y ) {
						diag = 1;
						return( QtdeMov(x+1, y+1, pF) );
					}
					else 
						if( x == pF.x && y > pF.y ) {
							esq = 1;
							return( QtdeMov(x, y-1, pF) );
						}
						else 
							if( x == pF.x && y < pF.y ) {
								dir = 1;
								return( QtdeMov(x, y+1, pF) );
							}
							else 
								if( x > pF.x && y == pF.y ) {
									baixo = 1;
									return( QtdeMov(x-1, y, pF) );
								}
								else 
									if( x < pF.x && y == pF.y ) {
										cima = 1;
										return( QtdeMov(x+1, y, pF) );
									}
}

// 1 3 4 5