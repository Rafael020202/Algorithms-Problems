#include <stdio.h>

int main(){
  int x,cont,impar;
  scanf("%i", &x);

  for(cont = 1; cont < 6; cont++){
    if (cont == 1){
      if(x % 2 == 0){
         impar = x + 1;
         printf("%i\n", impar);
         }else if(x % 2 != 0){
            impar = x + 2;
            printf("%i\n", impar);
           }
   }
  impar = impar + 2;
  printf("%i\n", impar);
}

 return 0;
}
