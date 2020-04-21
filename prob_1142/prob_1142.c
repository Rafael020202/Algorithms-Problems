#include <stdio.h>
int main(){
    int cont = 0,n,m,linha,coluna;
    scanf("%i", &n);
    int matriz[n][2];

    for(linha = 1;linha <= n;linha++){
       for(coluna = 0;coluna <= 2;coluna++){
            cont = cont + 1;
            printf("%i ", cont);
            }
        cont = cont + 1;
        printf("PUM");
        printf("\n");
      }
 return 0;
}
