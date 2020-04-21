#include <stdio.h>

float calcular(float n){
    float media  = n/2 ;
    return media;
}

void procedimento(){

    int c = 0;
    int cont = 0;
    float soma = 0;
    float nota;


    while(c == 0){
        scanf("%f", &nota);

        if(nota >=0 && nota <=10){
            soma += nota;
            cont++;
            if(cont == 2){
                float media = calcular(soma);
                printf("media = %.2f\n", media);
                break;
            }
        }else
            printf("nota invalida\n");
    }

}

int main(){

    procedimento();

    int resp;
    int c = 0;
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &resp);



    while(c == 0){

    if(resp == 1){

        procedimento();
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &resp);

    }
     else if(resp == 2)
         break;

     else if(resp != 1 || resp != 2){
         printf("novo calculo (1-sim 2-nao)\n");
         scanf("%d", &resp);
         }
    }

  return 0;
}
