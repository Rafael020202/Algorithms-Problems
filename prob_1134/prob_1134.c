#include <stdio.h>

int main(){
	int n, cont1 = 0, cont2 = 0, cont3 = 0;
	scanf("%d",&n);
	while(n != 4){
		if(n == 1)
			cont1++;
		else 
			if(n == 2)
				cont2++;
			else
				if(n == 3)
					cont3++;
	
		scanf("%d",&n);
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",cont1);
	printf("Gasolina: %d\n",cont2);
	printf("Diesel: %d\n",cont3);
	
	return 0;
}