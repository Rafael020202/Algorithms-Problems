#include <stdio.h>

int main(){

  int c = 0;

  while(c == 0){

    int x,y;
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("primeiro\n");
    else if(x < 0 && y > 0)
        printf("segundo\n");
    else if(x < 0 && y < 0)
        printf("terceiro\n");
    else if(x > 0 && y < 0)
        printf("quarto\n");
    else
        break;
 }
    return 0;
}
