#include <stdio.h>

#define MAX 10000

int main( ) {      
    int v01[MAX];
    int n, t;
    int aux, cont;
    int i01, i02;

    scanf("%d", &t);

    for ( i01 = 0; i01 < t; i01++ ) {
        scanf("%d", &n);

        for ( i02 = 1; i02 <= n; i02++) {
            scanf("%d", &aux);
            v01[i02] = aux;
        }

        cont = 0;

        for ( i02 = 1; i02 <= n; i02++ ) {
            while ( i02 != v01[i02] ) {
                aux = v01[i02];
                v01[i02] = v01[aux];
                v01[aux] = aux;
                cont++;
            }
        }

        printf("%d\n", cont);
    }
    
    return 0;
}
