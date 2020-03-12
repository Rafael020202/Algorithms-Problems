#include <stdio.h>

int main(){
 int notas100,notas50,notas20,notas10,notas5,notas2,moeda1,moeda50,moeda25,moeda10,moeda05,moeda01;
 float valor,centavos;

 //INICIALIZAÇÃO DAS VARIÁVEIS DE NOTAS
 notas100 = 0;
 notas50 = 0;
 notas20 = 0;
 notas10 = 0;
 notas5 = 0;
 notas2 = 0;

 //INICIALIZAÇÃO DAS VARIÁVEIS DE MOEDAS
 moeda1 = 0;
 moeda50 = 0;
 moeda25 = 0;
 moeda10 = 0;
 moeda05 = 0;
 moeda01 = 0;

 scanf("%f", &valor);

/*##############NOTAS###############*/
     while(valor - 100 >= 0){
        valor = valor - 100;
        notas100++;
    }

     while(valor - 50 >= 0){
        valor = valor - 50;
        notas50++;
    }

      while(valor - 20 >= 0){
        valor = valor - 20;
        notas20++;
    }

      while(valor - 10 >= 0){
        valor = valor - 10;
        notas10++;
    }

      while(valor - 5 >= 0){
        valor = valor - 5;
        notas5++;
    }

      while(valor - 2 >= 0){
        valor = valor - 2;
        notas2++;
    }

     while(valor - 1 >= 0){
        valor = valor - 1;
        moeda1++;
     }
/*###################################*/

/*##############MOEDAS###############*/
centavos = 100*valor;

  while(centavos - 50 > 0){
    centavos = centavos - 50;
    moeda50++;
  }
  while(centavos - 25 > 0){
    centavos = centavos - 25;
    moeda25++;
  }

  while(centavos - 10 > 0){
    centavos = centavos - 10;
    moeda10++;
  }
   while(centavos - 5 > 0){
    centavos = centavos - 5;
    moeda05++;
  }

//IMPRESSÃO DAS NOTAS
printf("NOTAS:\n");
printf("%i nota(s) de R$ 100.00\n", notas100);
printf("%i nota(s) de R$ 50.00\n", notas50);
printf("%i nota(s) de R$ 20.00\n", notas20);
printf("%i nota(s) de R$ 10.00\n", notas10);
printf("%i nota(s) de R$ 5.00\n", notas5);
printf("%i nota(s) de R$ 2.00\n", notas2);

//IMPRESSÃO DE MOEDAS
printf("MOEDAS:\n");
printf("%i moeda(s) de R$ 1.00\n", moeda1);
printf("%i moeda(s) de R$ 0.50\n", moeda50);
printf("%i moeda(s) de R$ 0.25\n", moeda25);
printf("%i moeda(s) de R$ 0.10\n", moeda10);
printf("%i moeda(s) de R$ 0.05\n", moeda05);
printf("%.0f moeda(s) de R$ 0.01\n", centavos);

 return 0;
}



