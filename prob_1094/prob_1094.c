#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, tot = 0, totC = 0, totR = 0, totS = 0;
	double pC, pR, pS;
	struct exp{
		int qtd;
		char tipo;
	};
	scanf("%d", &n);
	struct exp e[n];
	
	for(i = 0; i < n; i++){
		scanf("%d %c", &e[i].qtd, &e[i].tipo);
	}
	for(i = 0; i < n; i++){
		tot += e[i].qtd;
		if(e[i].tipo == 'C')
			totC += e[i].qtd;
		else
			if(e[i].tipo == 'R')
				totR += e[i].qtd;
			else
				totS += e[i].qtd;
	}
	pC = (double)totC/tot * 100;
	pR = (double)totR/tot * 100;
	pS = (double)totS/tot * 100;
	printf("Total: %d cobaias\n",tot);
	printf("Total de coelhos: %d\n",totC);
	printf("Total de ratos: %d\n",totR);
	printf("Total de sapos: %d\n",totS);
	printf("Percentual de coelhos: %.2lf % %\n",pC);
	printf("Percentual de ratos: %.2lf % %\n",pR);
	printf("Percentual de sapos: %.2lf % %\n",pS);
	
	return 0;
}