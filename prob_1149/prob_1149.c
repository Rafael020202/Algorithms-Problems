#include <stdio.h>

int main()
{
	int a, n, i, aux, soma=0;
	scanf("%d%d",&a,&n);
	
	if(n <= 0)
	{
		while(n <= 0)
			scanf("%d", &n);
	}
	
	
	for(i = 0; i < n; i++)
	{
		aux = i + a;
		soma += aux;
	}
	
	printf("%d\n", soma);
	
	return 0;
}