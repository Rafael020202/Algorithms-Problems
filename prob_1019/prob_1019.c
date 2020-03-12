#include <stdio.h>

int main(){

int n,horas,minutos,segundos;

 scanf("%i", &n);

if(n >=3600){

  horas = n/3600;
  minutos = (n%3600)/60;
  segundos = (n%3600)%60;

  printf("%i:%i:%i\n",horas,minutos,segundos);
}

else if(n >= 60){

 horas = 0;
 minutos = n/60;
 segundos = n%60;

 printf("%i:%i:%i\n",horas,minutos,segundos);
}

else if(n >= 0 && n <= 59){

 horas = 0;
 minutos = 0;
 segundos = n;

 printf("%i:%i:%i\n",horas,minutos,segundos);

    }
 return 0;
}
