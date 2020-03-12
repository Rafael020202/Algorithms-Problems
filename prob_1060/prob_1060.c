#include <stdio.h>

int main(){
    int c,qtdPositivos;
    float valor;
    qtdPositivos = 0;

    for(c = 1; c <= 6; c++){
        scanf("%f",&valor);
        if(valor > 0){
            qtdPositivos = qtdPositivos + 1;
        }
    }

   printf("%i valores positivos\n", qtdPositivos);

 return 0;
}
