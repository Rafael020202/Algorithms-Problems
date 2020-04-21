#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int v[1000001];

int QFunction(const void*, const void*);

int main() {
    int n,k;
    int i, qtde;
    long long int sum;

    while (scanf("%d %d", &n, &k) != EOF) {
        sum = 0;

        for ( qtde = 0; qtde < n; qtde++) {
            scanf("%d", &v[qtde]);        
        }
            
        qsort(v, qtde, sizeof(int), QFunction); 

        for ( i=0; i<k; i++ ) {
            sum += v[i];
        }

        printf("%d\n", sum % 1000000007);

    }

    
    return 0;
}

int QFunction(const void *a, const void *b) {
    int *n1 = (int *)a;
    int *n2 = (int *)b;

    if(*n1 > *n2) return -1;
    else if(*n1 < *n2) return 1;
    else return 0;
}

