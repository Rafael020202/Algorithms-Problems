#include <stdio.h>
#include <string.h>

int main(){

    char cpf[20];
    int i;
    scanf("%s", &cpf);

    for(i = 0; i < strlen(cpf); i++){

        if(i < 3){
            printf("%c", cpf[i]);
            if(i == 2)
                printf("\n");
        }
        else if(i > 3 && i < 7){
            printf("%c", cpf[i]);
            if(i == 6)
                printf("\n");
        }
        else if(i > 7 && i < 11)
            printf("%c", cpf[i]);
            if(i == 10){
                printf("\n");
            }
        else if(i > 11)
            printf("%c", cpf[i]);
            if(i == 13)
                printf("\n");
    }

  return 0;
}
