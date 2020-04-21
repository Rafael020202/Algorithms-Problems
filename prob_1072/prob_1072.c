#include <stdio.h>

int main(){
   int n,x,cont,qtdDentro,qtdFora;

   qtdDentro = 0;
   qtdFora = 0;

   scanf("%i",&n);

   for(cont = 1;cont <= n; cont++){
     scanf("%i",&x);
     if(x >= 10 && x <= 20){
        qtdDentro = qtdDentro + 1;
        }else{
           qtdFora = qtdFora + 1;
           }
   }
    printf("%i in\n%i out\n",qtdDentro,qtdFora);

  return 0;
}
