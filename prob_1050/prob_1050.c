#include <stdio.h>

int main(){
    int ddd[8] = {61,71,11,21,32,19,27,31},dddEnter;
    scanf("%i", &dddEnter);

    if(dddEnter == 61){
        printf("Brasilia\n");
        }else if(dddEnter == 71){
            printf("Salvador\n");
            }else if(dddEnter == 11){
                printf("Sao Paulo\n");
                }else if(dddEnter == 21){
                    printf("Rio de Janeiro\n");
                    }else if(dddEnter == 32){
                        printf("Juiz de Fora\n");
                        }else if(dddEnter == 19){
                            printf("Campinas\n");
                            }else if(dddEnter == 27){
                                printf("Vitoria\n");
                                }else if(dddEnter == 31){
                                    printf("Belo Horizonte\n");
                                    }else {
                                       printf("DDD nao cadastrado\n");
                                    }



  return 0;
}
