#include <stdio.h>

int main()
{
	double matriz[12][12],v,soma = 0;	
	int l,c;
	char op;

	scanf("%c",&op);

	for(l = 0; l < 12; l++){
		for(c = 0; c < 12; c++){
			scanf("%lf", &v);
			matriz[l][c] = v;
		}
	}

	for(l = 7; l <= 11; l++){
		if(l == 7){
			for (c = 5; c < 7; c++)
			{
				soma = soma + matriz[l][c];
			}
		}
		if(l == 8){
			for (c = 4; c < 8; c++)
			{
				soma = soma + matriz[l][c];
			}
		}
		if(l == 9){
			for (c = 3; c < 9; c++)
			{
				soma = soma + matriz[l][c];
			}
		}
		if(l == 10){
			for (c = 2; c < 10; c++)
			{
				soma = soma + matriz[l][c];
			}
		}
		if(l == 11){
			for (c = 1; c < 11; c++)
			{
				soma = soma + matriz[l][c];
			}
		}

	}

	if(op == 'S')
		printf("%.1lf\n", soma);
	else
		printf("%.1lf\n",soma/30);


	return 0;
}