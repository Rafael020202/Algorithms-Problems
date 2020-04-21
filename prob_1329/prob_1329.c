#include <stdio.h>

int main() {
    int joao, maria;
    int n, i;
    int p;

    while (1) {
        joao = 0;
        maria = 0;

        scanf("%d", &n);
        
        if( n == 0 ) break;

        for ( i = 0; i < n; i++) {
            scanf("%d", &p);

            if( p == 0 )
                maria++;
            else
                joao++;
        }

        printf("Mary won %d times and John won %d times\n", maria, joao);
    
    }

    return 0;
}