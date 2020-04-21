#include <stdio.h>

int main(){
 int valor, impares;
 impares = 1;
 scanf("%i", &valor);
if(valor >= 1 && valor <= 1000){
 while(impares <= valor){
    printf("%i\n", impares);
    impares = impares + 2;
 }
}
 return 0;
}
