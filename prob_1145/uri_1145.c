#include <stdio.h>

int main()
{
    int X,Y,z,a,b=0;
    scanf("%d%d", &X,&Y);
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}










/*#include<stdio.h>

int main()
{	int x, y, cont01, cont02;	
	scanf( "%d %d", &x, &y );	
	
	for( cont01 = 1; cont01 <= y; )
	{	for( cont02 = 0; cont02 < x && cont01 <= y; cont01++, cont02++ )
		{	if(cont01 != y)
				printf( "%d ", cont01 );
			else
				printf( "%d", cont01 );
		}
		if( cont01 != (y+1) )
			printf( "\n" );
	}
}*/