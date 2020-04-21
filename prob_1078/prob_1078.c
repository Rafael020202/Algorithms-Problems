#include <stdio.h>

int main(){
   int cont,n,operacao;
   scanf("%i", &n);

   for(cont = 1;cont <= 10;cont++){
       operacao = cont * n;
       printf("%i x %i = %i\n",cont,n,operacao);
       }

 return 0;
}
