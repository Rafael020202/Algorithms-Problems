#include <stdio.h>
#include <math.h>

int main(){

  int nVezes, cont, nGraos;
  int qtdGrama = 0;
  unsigned long long int qtdKilo;

  scanf("%d", &nVezes);

  for(cont = 1; cont <= nVezes; cont++){
        scanf("%d", &nGraos);
        qtdKilo = (pow(2,nGraos)/12)/1000;
        printf("%llu kg\n",qtdKilo);
  }



  return 0;
}
