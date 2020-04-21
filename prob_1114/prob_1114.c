#include <stdio.h>

int main(){
   int c = 0;

   while (c == 0){

    int senha;
    scanf("%d", &senha);

    if(senha == 2002){
        printf("Acesso Permitido\n");
        break;
    }else
        printf("Senha Invalida\n");
   }
 return 0;
}
