#include <stdio.h>

int main()
{
  int i,i2;
  long long int v[21],f;

  for(i = 0; i < 20; i++){
    scanf("%lld", &f);
    v[i] = f;
  }

  for(i2 = 19; i2 >= 0; i2--)
    printf("N[%d] = %lld\n", 19-i2, v[i2]);

    return 0;
}
