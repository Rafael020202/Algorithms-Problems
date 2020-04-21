#include <stdio.h>

int main()
{
  int x[10],i,n;

  for(i = 0; i < 10; i++){
    scanf("%d",&n);
      if(n <= 0)
         n = 1;
    x[i] = n;
  }

  for(i = 0; i < 10; i++){
    printf("X[%d] = %d\n",i,x[i]);
  }

  return 0;
}
