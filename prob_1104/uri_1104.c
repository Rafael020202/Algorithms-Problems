#include <stdio.h>
#include <string.h>

#define MAX 100000

int Alice[MAX];
int Beatriz[MAX];

int Min( int n1, int n2 );

int main() {
		
	int x, y, n;
	int qtdeA, qtdeB;
	int i, inter, aux;
	
	while( 1 ) {
		memset( Alice, 0, sizeof(Alice) );
		memset( Beatriz, 0, sizeof(Beatriz) );
		
		qtdeA = 0;
		qtdeB = 0;
		inter = 0;
		n = 0;
		
		scanf( "%d %d", &x, &y );
		
		if( x == 0 && y == 0 ) break;
		
		for ( i=0; i<x; i++ ) {
			scanf( "%d", &aux );
			if( aux != n ) {
				Alice[aux] = 1;
				qtdeA++;
				n = aux;
			}
		}
		
		n = 0;
		
		for ( i=0; i<y; i++ ) { 
			scanf( "%d", &aux );	
			if( aux != n ) {
				Beatriz[aux] = 1;
				qtdeB++;
				n = aux;
			
				if( Alice[aux] == 1 ) 
					inter++;
			}
		}
		printf( "%d\n", Min(qtdeA-inter, qtdeB-inter ) );	
		
	}
	
	return 0;
}

int Min( int n1, int n2 ) {	
	if( n1 < n2 ) return n1;
	
	return n2;
}
