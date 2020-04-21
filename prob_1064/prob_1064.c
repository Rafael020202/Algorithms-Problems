#include <stdio.h>

int main(){
    int cont,qtdPositivos;
    float valor,somatoria,media;

    qtdPositivos = 0;
    somatoria = 0;

    for(cont = 1; cont <=6; cont ++){
        scanf("%f", &valor);
        if(valor > 0){
            qtdPositivos = qtdPositivos + 1;
            somatoria = somatoria + valor;
        }
    }
media = somatoria/qtdPositivos;
printf("%i valores positivos\n%.1f\n", qtdPositivos,media);

 return 0;
}
