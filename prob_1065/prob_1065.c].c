#include <stdio.h>

int main(){
    int number,cont,qtdPares;
    qtdPares = 0;

    for(cont = 1;cont <= 5;cont++){
        scanf("%i",&number);
        if(number % 2 == 0){
           qtdPares = qtdPares + 1;
        }
    }
  printf("%i valores pares\n", qtdPares);


 return 0;
}
