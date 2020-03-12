#include <stdio.h>

int main(){
 int codigo,quantidade;
 float total;

 scanf("%i", &codigo);

 if(codigo == 1){
    scanf("%i", &quantidade);
    total = quantidade * 4;
    printf("Total: R$ %.2f\n", total);
    }else if(codigo == 2){
        scanf("%i", &quantidade);
        total = quantidade * 4.5;
        printf("Total: R$ %.2f\n", total);
        }else if(codigo == 3){
            scanf("%i", &quantidade);
            total = quantidade * 5;
            printf("Total: R$ %.2f\n", total);
            } else if(codigo == 4){
                 scanf("%i", &quantidade);
                 total = quantidade * 2;
                 printf("Total: R$ %.2f\n",total);
                 }else if(codigo == 5){
                    scanf("%i", &quantidade);
                    total = quantidade * 1.5;
                    printf("Total: R$ %.2f\n",total);
                  }

 return 0;
}
