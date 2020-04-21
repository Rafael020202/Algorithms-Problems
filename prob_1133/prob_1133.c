#include <stdio.h>

int main(){

    int x,y;
    scanf("%d %d", &x ,&y);

    if(x < y){

          if(x%5 == 2 || x%5 == 3){
                x++;
            }

        for(x; x < y; x++){
            if(x%5 == 2 || x%5 == 3){
                printf("%d\n", x);
            }
        }
    }

     else if(x > y){

        if(y%5 == 2 || y%5 == 3){
                y++;
            }

        for(y; y < x; y++){
            if(y%5 == 2 || y%5 == 3){
                printf("%d\n", y);
            }
        }
    }

    else{
        if(x%5 == 2 || x%5 == 3)
            printf("%d\n", x);

    }


  return 0;
}
