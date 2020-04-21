#include<stdio.h>

int main()
{
	double n;
	scanf("%lf",&n);

	int i=0;
	for(i; i<100; i++)
	{
		printf("N[%d] = %.4lf\n", i, n);
		n = n/2;
	}

}
