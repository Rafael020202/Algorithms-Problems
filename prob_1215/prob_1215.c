#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct lista {char word[211];};

int searchFor(char *str, int size, struct lista l[5010])
{
	int i, ctr = 1;
	for(i=0; i<size; i++)
	{
		if(!strcmp(str, l[i].word))
		{
			ctr = 0;
			break;
		}
	}
	if(ctr)
		return 1;
	else
		return 0;
}

int comp(const void *p1, const void *p2)
{
	struct lista *i = (struct lista *)p1, *j = (struct lista *)p2;
	return strcmp(i->word, j->word);
}

int main()
{
	
	struct lista l[5010];
	char aux[201], temp[201][201];
	int i, i2, cont, p, s = 0;
	
	while(scanf("%s", aux) != EOF)
	{
		i = 0;
		p = 0;
		cont = 0;
		
		while(cont < strlen(aux))
		{
			if(isalpha(aux[cont]))
			{
				temp[i][p] = tolower(aux[cont]);
				cont++;
				p++;
			}
			else
			{
				temp[i][p] = '\0';
				while(!isalpha(aux[cont]))
				{
					cont++;
				}
				p = 0;
				i++;
			}
			
			temp[i][p] = '\0';
		}
		
		if(i > 0){
			for(i2 = 0; i2 <= i; i2++)
			{
				if(strcmp(temp[i2], "") && searchFor(temp[i2], s, l))
				{
					strcpy(l[s].word, temp[i2]);
					s++;
				}	
			}
		}	
		
		else
		{
			if(searchFor(temp[0], s, l))
				{
					strcpy(l[s].word, temp[0]);
					s++;
				}
		}
	}
	
		qsort(l, s, sizeof(struct lista), comp);
		for(i2=0; i2 < s; i2++)
			printf("%s\n", l[i2].word);
		
	

	return 0;
}