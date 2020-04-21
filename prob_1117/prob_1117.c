#include <stdio.h>

int main(){


	int p = 1;
	float soma = 0;
	int v = 0;
	float media = 0;
	float nota = 0;

	while(p == 1){
        scanf("%f",&nota);

		if(nota >= 0 && nota <= 10){
			soma += nota;
			v++;
			if(v == 2){
			  media = (soma)/2;
			  printf("media = %.2f\n", media);
			  break;
		     }
		   }
		else if (nota < 0 || nota > 10){
		     printf("nota invalida");
        }
    }
  return 0;
}

