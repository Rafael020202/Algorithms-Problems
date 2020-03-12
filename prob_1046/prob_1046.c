#include <stdio.h>

int main(){
   int hi,hf,duracao;
   scanf("%i %i",&hi,&hf);
   duracao = hf - hi;

   if(duracao <= 0){
      duracao = duracao + 24;
      printf("O JOGO DUROU %i HORA(S)\n",duracao);
   }else{
      printf("O JOGO DUROU %i HORA(S)\n",duracao);
   }

 return 0;
}
