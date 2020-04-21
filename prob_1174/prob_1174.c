#include <stdio.h>

int main(){

  float a[4],n;
  int i;

  for(i = 0;i < 4; i++){
     scanf("%f", &n);
     a[i] = n;
  }

  for(i = 0; i < 4; i++){
    if(a[i] <= 10)
        printf("A[%d] = %.1f\n", i, a[i]);
  }


  return 0;
}
