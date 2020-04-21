#include <stdio.h>

int primo(int n){
	int i, ctr;
	if(n > 2){
		for(i = 2; i < n; i++){
			if((n%i) == 0){
				ctr = 0;
				break;
			}
			else 
				ctr = 1;
		}
	}
	else 
		if(n == 2)
			ctr = 1;
		else
			ctr = 0;
	if(ctr)
		return 1;
	else
		return 0;
} 

int main(){
	int n,m,i;
	scanf("%d",&m);
	for(i = 0; i < m; i++){
		scanf("%d",&n);
		if(primo(n))
			printf("%d eh primo\n",n);
		else
			printf("%d nao eh primo\n",n);
	}
	
}