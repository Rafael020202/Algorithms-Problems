#include <stdio.h>

int main(){
   int matriz[13][2],linha,coluna,x,y;
   x = 1;
   y = 60;

   for(linha = 0; linha <= 12; linha++){
      for(coluna = 0; coluna <= 0;coluna++){
          printf("I=%i J=%i\n",x,y);
      }
     x = x+3;
     y = y-5;
    }

 return 0;
}
