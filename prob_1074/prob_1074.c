#include <stdio.h>

int main(){
  int n,x,cont;
    scanf("%i",&n);

  for (cont = 1; cont <= n; cont++){
    scanf("%i", &x);
    if(x%2 == 0 && x>0){
        printf("EVEN POSITIVE\n");
        }else if (x%2 == 0 && x<0){
           printf("EVEN NEGATIVE\n");
           }
    if(x%2 != 0 && x>0){
        printf("ODD POSITIVE\n");
        }else if(x%2 != 0 && x<0){
            printf("ODD NEGATIVE\n");
            }

    if(x == 0){
        printf("NULL\n");
    }

  }

 return 0;
}
