#include <stdio.h>

int main(){
   int cont;
   char a,b,c,A,B,C;
   scanf("%c %c %c", &a, &b , &c);

   for (cont = 1; cont <= 3; cont++){
        if(cont == 1){
            A = a;
            B = b;
            C = c;
            printf("A = %c, B = %c, C = %c\n",A,B,C);

        }else if(cont == 2){
            A = b;
            B = c;
            C = a;
            printf("A = %c, B = %c, C = %c\n",A,B,C);

        }else{
            A = c;
            B = a;
            C = b;
            printf("A = %c, B = %c, C = %c\n",A,B,C);
        }

   }


  return 0;
}
