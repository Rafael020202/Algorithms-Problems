#include <stdio.h>

int main(){
 int n,cont;
 cont = 1;
 scanf("%i", &n);

 while(cont <= 10000){
    if(cont % n == 2){
        printf("%i\n", cont);
        cont++;
        }else{cont ++;
        }

 }

 return 0;
}
