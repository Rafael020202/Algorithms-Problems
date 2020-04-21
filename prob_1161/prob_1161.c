#include <stdio.h>

long long int fatorial(int x){

    int cont = x,i;
    long long int fatorial = 1;

  if(x != 0){

    for(i = 1; i <= cont; i++){
        fatorial = fatorial * x;
        x--;
    }

    return fatorial;

  }else
      return 1;
}


int main(){
    int x,y, contr = 1;


  while(scanf("%d %d", &x, &y) != EOF){
        long long int somaF = fatorial(x) + fatorial(y);
        printf("%llu\n", somaF);

}


  return 0;
}
