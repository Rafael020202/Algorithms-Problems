#include <stdio.h>

int main(){
    int[] v = {3,4,5,21,3};

 int x,y;
 scanf("%i %i",&x,&y);

 int contY = 1;

 while(contY < y - x ){
        for(int contX = 1; contX <= x; contX++){
            printf("%i ", contY);
            contY++;
        }
    printf("\n");
    }

if(contY > y - x){
    int contX = 1;

    while(contX%x > 0){
        printf("%i ", contY);
        contY++;
        contX++;
    }

    if(contX%x == 0){
        printf("%i", contY);
    }
}



 return 0;
}
