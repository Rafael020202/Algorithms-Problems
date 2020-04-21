#include <stdio.h>

int main(){
  int x,y,a1,an,n,soma;
  scanf("%i %i", &x, &y);

  if(x == y){
    printf("0\n");
  }

  if(x > y){
/*#####TRATAMENTO DOS TERMOS#####*/
    //TERMO a1
    if(y % 2 == 0){
        a1 = y + 1;
        }else {
           a1 = y + 2;
           }
    //TERMO an
    if(x % 2 == 0){
        an = x - 1;
        }else {
           an = x - 2;
           }
/*###############################*/
    if(x == y){
        printf("%i\n", x);
        }else {
            n = ((an - a1)/2) + 1;
            soma = ((an + a1)*n)/2;
            printf("%i\n", soma);

        }

  }

  if(y > x){
    /*#####TRATAMENTO DOS TERMOS#####*/
    //TERMO a1
    if(x % 2 == 0){
        a1 = x + 1;
        }else {
           a1 = x + 2;
           }
    //TERMO an
    if(y % 2 == 0){
        an = y - 1;
        }else {
           an = y - 2;
           }
/*###############################*/
    if(x == y){
        printf("%i\n", x);
        }else {
            n = ((an - a1)/2) + 1;
            soma = ((an + a1)*n)/2;
            printf("%i\n", soma);

        }


  }

 return 0;
}
