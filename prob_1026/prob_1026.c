#include <stdio.h>

void rotina(long long int n1,long long int n2){
  long long int bits1[32],bits2[32],r[32],cont = 1,aux = 0,i = 0,l1,l2,l3;

  while((n1/2)>= 1){
     aux = (n1%2);
     bits1[i] = aux;
     n1 = n1/2;
     i++;
  }
  l1 = i;
  aux = n1;
  bits1[i] = aux;

  i = 0;
  while((n2/2)>= 1){
     aux = (n2%2);
     bits2[i] = aux;
     n2 = n2/2;
     i++;
  }
  l2 = i;
  aux = n2;
  bits2[i] = aux;

  if(l1 < l2){
    n1 = l1;
    n2 = l2;
    for(i = 0; i <= n2; i++)
        r[i] = bits2[i];
 }
  else{
    n1 = l2;
    n2 = l1;
    for(i = 0; i <= n2; i++)
        r[i] = bits1[i];
  }

  for(i = 0; i <= n1; i++){
      aux = bits1[i] + bits2[i];
      if(aux >= 2){
        aux = 0;
      }
      r[i] = aux;
  }
  l3 = n2;

  aux  = 0;
  for(l1 = 0; l1 <= l3; l1++){
      aux += r[l1] * cont;
      cont = cont * 2;
  }
  printf("%lld\n",aux);


}

int main(){
  long long int n1,n2;
  while(scanf("%lld%lld",&n1,&n2) != EOF)
    rotina(n1,n2);


}
