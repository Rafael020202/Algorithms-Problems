#include <stdio.h>
#include <math.h>

int EhPrimo(int);

int main() {
    int i, ret; 
    int n, q;

    scanf("%d", &n);

    for ( i = 0; i < n; i++) {     
        scanf("%d", &q);

        ret = EhPrimo(q);

        if ( ret )
            printf("Prime\n", i);
        else
            printf("Not Prime\n");
    
    }

    return 0;
}


int EhPrimo(int x) {
    int i;

    if ( x < 4 ) {
        if ( x < 2 ) return 0;
        else return 1;
    }

    for ( i = 2; i <= sqrt(x); i++ ) {
        if(x % i == 0)
            return 0;
    }

    return 1;
}