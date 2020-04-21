#include <stdio.h>
#include <Math.h>

int main(){

int qtdLinhas;
scanf("%i", &qtdLinhas);

 for(int cont = 1; cont <= qtdLinhas; cont++){
    printf("%i %i %i\n",cont, cont*cont, cont*cont*cont);
   }

 return 0;
}
