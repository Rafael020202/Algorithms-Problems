#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i3;
	int sT, i, i2, aux, cont = 0, troca;
	
	scanf("%d", &n);
	for(i3 = 0; i3 < n; i3++){
		scanf("%d", &sT);
		int	nV[sT];
		for(i = 0; i < sT; i++)
			scanf("%d", &nV[i]);
	
		i2 = 0;
		for(i = 0; i < sT; i++){
			for(i2 = i + 1; i2 < sT; i2++){
				if(nV[i] > nV[i2]){
					aux = nV[i];
					nV[i] = nV[i2];
					nV[i2] = aux;
					cont++;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n", cont);
		cont = 0;
	}
	
	return 0;
}