#include <stdio.h>

int main(){

  int cont = 1;

  while(cont == 1){

    int x,y;
    scanf("%i %i", &x, &y);

    if(x > y)
        printf("Decrescente\n");
    else if(x < y)
        printf("Crescente\n");
    else
        break;
    }

  return 0;
}
