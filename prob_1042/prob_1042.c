#include <stdio.h>

int main(){
  int x,y,z;
  scanf("%i %i %i",&x,&y,&z);

  /*Possibilidades de X*/
  if(x>y && x>z && y>z){
    printf("%i\n%i\n%i\n",z,y,x);
    }else if(x>z && x>y && z>y){
      printf("%i\n%i\n%i\n",y,z,x);
  /*=============================*/
      /*Possibilidades de Y*/
      }else if(y>x && y>z && x>z){
         printf("%i\n%i\n%i\n",z,x,y);
         }else if(y>z && y>x && z>x){
            printf("%i\n%i\n%i\n",x,z,y);
       /*==========================*/
            }else if(z>y && z>x && y>x){
               printf("%i\n%i\n%i\n",x,y,z);
               }else if(z>x && z>y && x>y){
                  printf("%i\n%i\n%i\n",y,x,z);
                  }
  printf("\n%i\n%i\n%i\n",x,y,z);

 return 0;
}
