#include <stdio.h>

int main(){

  int x,y;
  int soma = 0;
  scanf("%d %d", &x, &y);


  if(x < y){
    for(x; x <= y; x++){
        if(x%13 != 0){
           soma += x;
        }
     }
  }
  else if(x > y){
    for(y; y<= x; y++){
        if(y%13 != 0){
            soma += y;
        }
     }
  }
  else{
    if(y%13 != 0)
        soma = y;
    else
        soma = 0;
  }
    printf("%i\n", soma);

  return 0;
}
