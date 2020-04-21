#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nC, nH, i, i2, h, i3=0, aux=0, aux2=0;
	scanf("%d", &nC);
	for(i=0; i<nC; i++)
	{
		int v[231] = {0};
		scanf("%d", &nH);
		for(i2=0; i2<nH; i2++)
		{
			scanf("%d", &h);
			v[h] += 1;
			aux++;
		}
		for(i2=20;  i2<=230; i2++)
		{
			for(i3=0; i3<v[i2]; i3++)
			{
				aux2++;
				if(aux2 < aux)
					printf("%d ",i2);
				else
					printf("%d",i2);
			}
		}
		printf("\n");
		aux = 0;
		aux2 = 0;
	}
	

	return 0;
}