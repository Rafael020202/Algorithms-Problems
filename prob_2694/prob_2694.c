#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int soma(char str[15])
{
  char val[15];
  int v1,v2,v3,soma,i,n = 0;
  
    for(i = 0; i < strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            val[n] = str[i];
            n++;
        }
    }


  v1 = atoi(val)/100000;
  v2 = (atoi(val)%100000)/100;
  v3 = (atoi(val)%100000)%100;
  soma = v1 + v2 + v3;

  return soma;
	
}



int main()
{
  char str[15];	
  int i,c;
  scanf("%d",&i);
  for(c = 0; c < i; c++)
  {
	scanf("%s", &str);
	printf("%d\n", soma(str));	
  }

  return 0;
}
