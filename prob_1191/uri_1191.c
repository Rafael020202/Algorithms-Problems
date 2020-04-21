#include <stdio.h>
#include <ctype.h>
#include <string.h>

int curr;

int find ( char str1[ 1000 ], char crt ) 
{	int i;
	for( i=0; i<strlen( str1 ); i++ )
	{	if( str1[ i ] == crt )
			return i;	
	}
}

void foo(char prefixa[ 1000 ], char infixa[ 1000 ], int i, int j) 
{	if(i <= j) 
	{	curr++;
		int pos = find( infixa, prefixa[curr] );
		foo(prefixa, infixa, i, pos - 1);
		foo(prefixa, infixa, pos + 1, j);
		printf("%c", infixa[ pos ], pos);
	}
}

int main() 
{	char pre[ 1000 ], in[ 1000 ];
	
	while( scanf( "%s%s", pre, in ) != EOF ) 
	{	curr = -1;
		foo(pre, in, 0,  strlen( pre ) - 1);
		printf( "\n" );
	}

  return 0;
}