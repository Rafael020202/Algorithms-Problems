#include <stdio.h>

int main(){
   int matriz[15][2],linha,coluna,i,j,cont;
   i = 1;
   j = 7;
   for(linha = 0;linha <= 4;linha++){
      for(coluna = 0;coluna <= 0;coluna++){
           for(cont = 1;cont <= 3; cont++){
               printf("I=%i J=%i\n",i,j);
               j = j - 1;
           }
       }
    i = i + 2;
    j = 7;
    }

 return 0;
}
