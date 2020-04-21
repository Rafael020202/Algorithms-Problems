#include <stdio.h>
#include <stdlib.h>

int main()
{	int n, nAux;
	long long int v;
	
	scanf("%d", &n);
	for(nAux = 0; nAux < n; nAux++)
	{	scanf("%lld", &v);
		long long int cont=0, aux, qtde = 0;	
		
		while(v > 0)
		{	aux = v%2;
			v /= 2;
			
			if(aux == 1)
			{	cont++;
			}else{	if(cont > qtde)
					{	qtde = cont;
						cont = 0;
					}
					cont = 0;
				 }
		}
		if(cont > qtde)
		{	qtde = cont;
			cont = 0;
		}
		
		printf("%lld\n", qtde);
	}
	
	return 0;
}






