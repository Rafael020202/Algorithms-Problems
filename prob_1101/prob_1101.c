#include <stdio.h>

int main(){

    int c = 1;

 while(c == 1){

     int n,m;

     scanf("%d %d", &n, &m);

     if(n > 0 && m > 0)
      {
         int a1,an;
         int soma = 0;

        if(m > n){

            a1 = n;
            an = m;

                while(a1 <= an)
                {
                    printf("%d ", a1);
                    soma += a1;
                    a1++;
                }

       }else if (n > m){

         a1 = m;
         an = n;

            while(a1 <= an)
            {
            printf("%d ", a1);
            soma += a1;
            a1++;
            }

       }else{
          soma = 0;

       }
          printf("Sum=%d", soma);

       }else
        {
          break;
        }
    }

    return 0;
}
