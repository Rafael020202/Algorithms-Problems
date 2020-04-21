#include <stdio.h>

int main(){
   int valor[100],cont,maiorValor,maiorPosicao;

   for(cont = 0;cont <= 99;cont++){
       scanf("%i", &valor[cont]);

       if(cont == 0){
         maiorValor = valor[0];
       }
       if(maiorValor < valor[cont]){
          maiorValor = valor[cont];
          maiorPosicao = cont;
        }
   }

   printf("\n%i\n%i\n", maiorValor,maiorPosicao + 1);

 return 0;
}
