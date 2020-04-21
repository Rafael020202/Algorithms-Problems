#include <stdio.h>

int main(){
    double matriz[12][12],valor,soma = 0,med;
    int linha,coluna,cont1 = 11,cont2 = 1;
	char carac;
	
	scanf("%c", &carac);
	
    for(linha = 0; linha < 12; linha++){
        for(coluna = 0; coluna < 12; coluna++){
			scanf("%lf", &valor);
			matriz[linha][coluna] = valor;
        }
    }

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0 + cont2; coluna < cont1; coluna++){
			soma += matriz[linha][coluna];
        }
		cont1 = cont1 - 1;
		cont2 = cont2 + 1; 
	}
	
	if(carac == 'S')
		printf("%.1lf\n", soma);
	else
		printf("%.1lf\n", soma/30);

   return 0;
}
