#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char str1[15], str2[15], ataque[] = "ataque";
	int val1,val2,i,c;

	scanf("%d", &c);

for(i = 0; i < c; i++){
	scanf("%s%s",str1,str2);

	if(!strcmp(str1, "ataque"))
		val1 = 2;
	else if(!strcmp(str1,"pedra"))
		val1 = 1;
	else if(!strcmp(str1,"papel"))
		val1 = 0;

	if(!strcmp(str2,"ataque"))
		val2 = 2;
	else if(!strcmp(str2,"pedra"))
		val2 = 1;
	else if(!strcmp(str2,"papel"))
		val2 = 0;

	if (val1 > val2)
		printf("Jogador 1 venceu\n");
	else if(val1 < val2)
		printf("Jogador 2 venceu\n");
	else
		if(val1 == 0 && val2 == 0)
			printf("Ambos venceram\n");
		else if(val1 == 1 && val2 == 1)
			printf("Sem ganhador\n");
		else
			printf("Aniquilacao mutua\n");

}

	return 0;
}
