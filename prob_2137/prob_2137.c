#include <stdio.h>

int main()
{
	int i,i2,n,val,menor,aux;
	
	while (scanf("%d",&n) != EOF){
		int vetor[n];
		for(i = 0; i < n; i++){
			scanf("%d",&val);
			vetor[i] = val;
		}
	
		i = 0;
		while(i < n){
			menor = i;
			i2 = i + 1;
			while(i2 < n){
				if(vetor[i2] < vetor[menor])
					menor = i2;
				i2++;
			}
			aux = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = aux;
			i++;
		}


		for(i = 0;i < n;i++)
			printf("%04d\n",vetor[i]);	

	}
	return 0;
}
