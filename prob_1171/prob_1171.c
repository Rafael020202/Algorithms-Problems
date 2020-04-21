#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i,i2,cont = 0,menor;
  scanf("%d",&n);

  int num[n],val;

  struct freq{
    int digit;
    int frequencia;
  };
  struct freq f[n],aux;

  for(i = 0; i < n; i++){
      scanf("%d",&val);
      num[i] = val;
  }
  for(i = 0; i < n; i++){
        for(i2 = 0; i2 < n; i2++){
            if(num[i] == num[i2]){
                cont++;
            }
        }
    f[i].digit = num[i];
    f[i].frequencia = cont;
    cont = 0;
  }

  i = 0;
  while(i < n){
    i2 = i + 1;
    menor = i;
    while(i2 < n){
        if(f[i2].digit < f[menor].digit)
            menor = i2;
        i2++;
    }
    aux = f[i];
    f[i] = f[menor];
    f[menor] = aux;
    i++;
  }

  printf("%d aparece %d vez(es)\n",f[0].digit,f[0].frequencia);
  for(i = 1; i < n ;i++){
    if(f[i].digit != f[i - 1].digit){
        printf("%d aparece %d vez(es)\n",f[i].digit,f[i].frequencia);
    }
  }

  return 0;
}
