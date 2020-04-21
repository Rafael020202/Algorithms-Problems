#include <stdio.h>

int main()
{
  int c;
  long long int i;
  scanf("%lld", &i);

  for(c = 0; c < 10; c++)
  {
    if(c == 0)
        printf("N[%d] = %lld\n", c,i);
    else{
        i = 2*i;
        printf("N[%d] = %lld\n", c, i);
    }
  }

  return 0;
}
