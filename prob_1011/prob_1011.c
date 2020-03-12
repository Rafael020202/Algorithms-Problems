#include <stdio.h>

int main(){

    double raio, volume,pi;

    pi = 3.14159;
    scanf("%lf", &raio);
    volume = (4.0/3.0)*(raio*raio*raio)*pi;

    printf("VOLUME = %.3lf\n", volume);
  return 0;
}
