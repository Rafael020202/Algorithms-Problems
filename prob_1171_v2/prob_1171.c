#include <stdio.h>
#include <string.h>

#define MAX 2001

int main( ) {
    int n, i;
    int num, v[MAX];
    int max = 0;

    for ( i = 0; i < 2001; i++)
        v[i] = 0;
        
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        scanf("%d", &num);
        v[num]++;

        if(num > max) max = num;
    }
    for ( i = 1; i <= max; i++ ) {   
        if( v[i] > 0 ) 
            printf("%d aparece %d vez(es)\n", i, v[i]);
    }

    return 0;
}