#include <stdio.h>

int main(){

  int valor,n100,n50,n20,n10,n5,n2,n1;

    printf("NOTAS:\n");

   if(valor> 0 && valor<1000000) {

        printf("%i\n", valor);
    //notas de 100
    if (valor / 100 != 0){
        n100 = valor/100;
        printf("%i nota(s) de R$ 100,00\n", n100);
      }else{printf("0 nota(s) de R$ 100,00\n");}

    //notas de 50
    if((valor % 100)/50 != 0){
        n50 = (valor % 100)/50;
        printf("%i nota(s) de R$ 50,00\n", n50);
      }else{printf("0 nota(s) de R$ 50,00\n");}

     //notas de 20
    if(((valor % 100)% 50)/20 != 0){
        n20 = ((valor % 100)% 50)/20;
        printf("%i nota(s) de R$ 20,00\n", n20);
    }else{printf("0 nota(s) de R$ 20,00\n");}

    //notas de 10
    if((((valor % 100)% 50)%20)/10 != 0){
        n10 = (((valor % 100)% 50)%20)/10;
        printf("%i nota(s) de R$ 10,00\n", n10);
    }else{printf("0 nota(s) de R$ 10,00\n");}

    //notas de 5
    if((((valor % 100)% 50)%20)/5 != 0){
        n5 = (((valor % 100)% 50)%20)/5.0;
        printf("%i nota(s) de R$ 5,00\n", n5);
    }else{printf("0 nota(s) de R$ 5,00\n");}

    //notas de 2
    if(((((valor % 100)% 50)%20)%5)/2 != 0){
        n2 = ((((valor % 100)% 50)%20)%5)/2;
        printf("%i nota(s) de R$ 2,00\n", n2);
    }else{printf("0 nota(s) de R$ 2,00\n");}

    printf("MOEDAS:\n");

    //moedas de 1
    if((((((valor % 100)% 50)%20)%5)%2)/1 != 0){
        n1 = (((((valor % 100)% 50)%20)%5)%2)/1;
        printf("%i moedas(s) de R$ 1,00\n", n1);
    }else{printf("0 moedas(s) de R$ 1,00\n");}
   }
 return 0;
}
