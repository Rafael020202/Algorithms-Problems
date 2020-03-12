#include <stdio.h>
#include <time.h>

int Fibonacci( int );

int cont;

int main( ) {
	
	int n, x, i, aux;
	clock_t t;
	double time;
	
	scanf("%d", &n);
	
	for ( i=0; i<n; i++ ) {
		cont = 0;
		scanf("%d", &x);
		
		t = clock();
		aux = Fibonacci(x);
		t = clock() - t;
		
		time = ((double) t)/CLOCKS_PER_SEC;
	
		printf( "fib(%d) = %d calls = %d\ndemorou: %f\n", x, cont, 
			  aux, time);
	}
	
	return 0;
}

int Fibonacci( int n ) {
	if( n == 0 )
		return 0;
	else 
		if( n == 1 )
			return 1;
		else {
			cont += 2;
			return Fibonacci(n-1) + Fibonacci(n-2);
		}
}



