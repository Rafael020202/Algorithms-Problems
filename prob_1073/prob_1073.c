#include <stdio.h>

int main(){
  int n,number,pares,quadrado;
  pares = 0;

  scanf("%i", &n);
  if(n % 2 == 0){
    number = n;
    }else {
        number = n - 1;
    }


 while(pares < number){
    pares = pares + 2;
    quadrado = pares*pares;
    printf("%i^2 = %i\n", pares,quadrado);
}

 return 0;
}
