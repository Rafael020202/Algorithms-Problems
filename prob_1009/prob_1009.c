#include <stdio.h>

int main(){

 char nome[50];
 double salario, totVendas, salFinal;

 scanf("%s %lf %lf",&nome,&salario,&totVendas);
 salFinal = salario + totVendas*0.15;

 printf("TOTAL = R$ %.2lf\n", salFinal);

 return 0;
}
