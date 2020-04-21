#include <stdio.h>

int main(){
   int valor,cont,qtdImpar,qtdPar,qtdPositivo,qtdNegativo;

   qtdImpar = 0;
   qtdPar = 0;
   qtdPositivo = 0;
   qtdNegativo = 0;

   for(cont = 1;cont <= 5; cont++){
    scanf("%i",&valor);
        if(valor % 2 != 0){
           qtdImpar = qtdImpar + 1;
        }
        if(valor % 2 == 0){
            qtdPar = qtdPar + 1;
        }
        if(valor > 0){
            qtdPositivo = qtdPositivo + 1;
        }
        if(valor < 0){
            qtdNegativo = qtdNegativo + 1;
        }
   }

 printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",qtdPar,qtdImpar,qtdPositivo,qtdNegativo);

 return 0;
}
