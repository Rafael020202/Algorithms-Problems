#include <stdio.h>

int main(){

  int codigoPeca1, numeroPecas1, codigoPeca2, numeroPecas2;
  float valUnit1, valUnit2,valTot;

  //peça1
  scanf("%i",&codigoPeca1);
  scanf("%i",&numeroPecas1);
  scanf("%f",&valUnit1);

  //peça2
  scanf("%i",&codigoPeca2);
  scanf("%i",&numeroPecas2);
  scanf("%f",&valUnit2);

  valTot = valUnit1*numeroPecas1 + valUnit2*numeroPecas2;

  printf("VALOR A PAGAR: R$ %.2f\n", valTot);

 return 0;
}
