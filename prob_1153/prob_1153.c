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
	long long int n,f;
	scanf("%llu",&n);
	f = fatorial(n);
	printf("%llu\n",f);
}