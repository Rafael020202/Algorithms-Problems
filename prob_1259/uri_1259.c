#include <stdio.h>
#include <stdlib.h>

void ImprimeArray( int*, int );
int cmpPares(const void*, const void*);
int cmpImpares(const void*, const void*);

int main( )
{	int pares[100000], impares[100000], 
		i, n, aux, cP, cI;
	
	cP = 0;
	cI = 0;
	
	scanf( "%d" , &n);
	
	for ( i=0; i<n; i++ ) {	
		scanf( "%d", &aux );
		
		if ( aux%2 == 0 ) {	
			pares[cP] = aux;
			cP++;
		}else {
			impares[cI] = aux;
			cI++;
		} 
	}
	
	qsort( pares, cP,sizeof(int), cmpPares );
	qsort( impares, cI,sizeof(int), cmpImpares );
	
	ImprimeArray( pares, cP );
	ImprimeArray( impares, cI );
}

void ImprimeArray ( int *arr, int tam ) {
	int i;
	
	for ( i=0; i<tam; i++ ) {
		printf( "%d\n", arr[i] );
	}
}

int cmpPares(const void *p1, const void *p2)
{ 	int *i = (int *)p1, *j = (int *)p2;
	if (*i < *j)
		return -1;
	else
		if (*i == *j)
			return 0;
		else
			return 1;
}

int cmpImpares(const void *p1, const void *p2)
{ 	int *i = (int *)p1, *j = (int *)p2;
	if (*i < *j)
		return 1;
	else
		if (*i == *j)
			return 0;
		else
			return -1;
}
