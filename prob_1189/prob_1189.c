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

	for(l = 1; l <= 10; l++){
		if(l <= 5){
			for(c = 0; c < l; c++)
				soma = soma + matriz[l][c];
		}else
			if(l == 6)
				for(c = 0; c < 5;c++)
					soma = soma + matriz[l][c];
			else if(l == 7)
				 for(c = 0; c < 4;c++)
					soma = soma + matriz[l][c];	
			else if(l == 8)
				 for(c = 0; c < 3;c++)
					soma = soma + matriz[l][c];
			else if(l == 9)
				 for(c = 0; c < 2;c++)
					soma = soma + matriz[l][c];
			else if(l == 10)
				 for(c = 0; c < 1;c++)
					soma = soma + matriz[l][c];	
	}

	if(op == 'S')
		printf("%.1lf\n", soma);
	else
		printf("%.1lf\n",soma/30);


	return 0;
}