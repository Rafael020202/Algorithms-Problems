#include <stdio.h>

int main(){
   int matriz[11][2],linha,coluna,cont1,cont2,cont3;
   float i,j;
   cont1 = 1;
   cont2 = 1;
   cont3 = 5;
   i = 0;
   j = 1;
   for(linha = 0;linha <= 9;linha++){
      for(coluna = 0;coluna <= 0;coluna++){
           while(cont1 <= 3){
               printf("I=%.0f J=%.0f\n",i,j);
               j = j + 1;
               cont1++;
           }
           while(cont2 <= 3){
             i = 0.2;
             if(cont2 == 1){
               j = 1.2;
             }else{j = j + 1;}
             printf("I=%.1f J=%.1f\n",i,j);
             cont2++;
           }
           while(cont3 <= 3){
            j = j + 1;
            printf("I=%.1f J=%.1f\n",i,j);
            cont3++;
         }
       }
    cont1 = 5;
    cont2 = 5;
    cont3 = 1;
    i = i + 0.2;
    j = j + 0.2;
    j = j - 3;
    if(j >= 1 ){
        j = j - 1;
    }

  }

 return 0;
}

