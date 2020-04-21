#include<stdio.h>

int main(){

    int x,y,qtd,cont;
    scanf("%i",&qtd);

   for(cont = 0; cont < qtd; cont++){
    scanf("%i %i",&x,&y);

   if(y != 0){
    float n1 = (float) x;
    float n2 = (float) y;

    printf("%.1f\n", n1/n2);

   }else
        printf("divisao impossivel\n");
    }
  return 0;
}
