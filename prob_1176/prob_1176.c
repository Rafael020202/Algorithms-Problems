#include <stdio.h>

void fibonacci(int n){

 int i;
 unsigned long long int n1,n2,n3;

 n1 = 0;
 n2 = 1;

   if(n < 2){
        if(n == 0)
            printf("Fib(0) = %d\n", n);
        else
            printf("Fib(1) = %d\n", n);
   }

   else{
        for(i = 0; i <= (n-2);i++){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }

        printf("Fib(%d) = %llu\n",n,n3);
  }



}


int main()
{
 int i,c,n;
 scanf("%d",&c);

 for(i = 0; i < c;i++){
    scanf("%d", &n);
    fibonacci(n);
 }


 return 0;
}
