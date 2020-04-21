#include <stdio.h>
#include <stdlib.h>

int rotina(int nG, int nP)
{
	int  i, i2, i3, i4, s, k, aux = 0, maior;
	int camp[nG][nP];
	int pont[nG][nP];
	int result[nP];
	
	for(i = 0; i < nG; i++)
	{
		for(i2 = 0; i2 < nP; i2++)
		{
			scanf("%d", &camp[i][i2]);
		}
	}
	
	scanf("%d", &s);
	for(i = 0; i < s; i++)
	{
		scanf("%d", &k);
		int sP[k];
		for(i2 = 0; i2 < k; i2++)
		{
			scanf("%d", &sP[i2]);
		}
		
		for(i3 = 0; i3 < nG; i3++)
		{
			for(i4 = 0; i4 < nP; i4++)
			{
				if(camp[i3][i4] <= k)
					pont[i3][i4] = sP[camp[i3][i4] - 1];
				else
					pont[i3][i4] = 0;
			}
		}
		
		int tot[nP];
		for(i3 = 0; i3 < nP; i3++)
		{
			for(i4 = 0; i4 < nG; i4++)
			{
				aux += pont[i4][i3];
			}
			tot[i3] = aux;
			aux = 0;
		}
		
		maior = 0;
		for(i3 = 0; i3 < nP; i3++)
		{		
			for(i4 = i3 + 1; i4 < nP; i4++)
			{
				if(tot[i4] > tot[maior])
					maior = i4;	
			}	
		}
		result[aux] = maior;
		for(i3 = 0; i3 < nP; i3++)
		{
			if(tot[i3] == tot[maior] && i3 > maior)
			{
				aux++;
				result[aux] = i3;
			}	
		}
		
		if(aux > 0)
		{
			for(i3 = 0; i3 <= aux; i3++){
				if(i3 < aux)
					printf("%d ", result[i3] + 1);
				else
					printf("%d\n", result[i3] + 1);
			}
		}
		else
			printf("%d\n", maior + 1);
		
		aux = 0;		
	}
}

int main()
{	int nG, nP;
	
	scanf("%d%d", &nG, &nP);
	while(nG != 0 && nP != 0)
	{
		rotina(nG, nP);
		scanf("%d%d", &nG, &nP);
	}
	
	return 0;
}