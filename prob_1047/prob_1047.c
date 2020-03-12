#include <stdio.h>

int main(){
   int hi,hf,mi,mf,difHoras,difMinutos,horas,minuto;
   scanf("%i %i %i %i",&hi,&mi,&hf,&mf);

   difHoras = hf - hi;
   difMinutos = mf - mi;

   if(difHoras <= 0){
      difHoras = difHoras + 24;
      horas = difHoras;
   }else {
      horas = difHoras;
   }

   if(difMinutos < 0){
     difMinutos = difMinutos + 60;
     minuto = difMinutos;
     difHoras = difHoras - 1;
     horas = difHoras;
   }else {
     minuto = difMinutos;
   }
   if(horas == 24 && minuto > 0 && minuto <= 59){
      horas = horas - 24;
      printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas,minuto);
      }else {
        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas,minuto);
       }


 return 0;
}
