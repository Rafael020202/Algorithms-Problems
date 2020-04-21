#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 305

struct pilha
{	char oprnd;
	struct pilha *prox;
};
typedef struct pilha Pilha;

struct descrtr
{	Pilha *topo;
	int qtde;
};
typedef struct descrtr PDescritor;

void init (PDescritor*);
void push (PDescritor*, char);
char pop  (PDescritor*);
int	 calcPrd(char, char);
void toInfix(char*);

int main()
{	int n, nAux;
	
	scanf("%d ", &n);
	for(nAux = 0; nAux < n; nAux++)
	{	char expr[305];
		fgets(expr, 305, stdin);
		toInfix(expr);
	}
}

void init(PDescritor *pdscrtr)
{	pdscrtr->topo = NULL;
	pdscrtr->qtde = 0;
}

void push(PDescritor *pdscrtr, char oprnd)
{	Pilha *pAux = (Pilha*) malloc(sizeof(Pilha));

	pAux->oprnd = oprnd;
	pAux->prox = pdscrtr->topo;

	pdscrtr->topo = pAux;
	pdscrtr->qtde++;
}

char pop(PDescritor *pdscrtr)
{	Pilha *pAux = pdscrtr->topo;
	char vAux = pAux->oprnd;

	pdscrtr->topo = pAux->prox;
	pdscrtr->qtde--;

	free(pAux);
	return vAux;
}

int	calcPrd(char oprnd_1, char oprnd_2)
{	int prd_1, prd_2;
	if(oprnd_1 == '(' || oprnd_1 == ')' || oprnd_2 == '(' || oprnd_2 == ')')
		return 0;

	if(oprnd_1 == '+' || oprnd_1 == '-')
		prd_1 = 10;
	else
		if(oprnd_1 == '*' || oprnd_1 == '/')
			prd_1 = 20;
		else
			if(oprnd_1 == '^')
				prd_1 = 30;
			else
				prd_1 = 0;
	
	if(oprnd_2 == '+' || oprnd_2 == '-')
		prd_2 = 10;
	else
		if(oprnd_2 == '*' || oprnd_2 == '/')
			prd_2 = 20;
		else
			if(oprnd_2 == '^')
				prd_2 = 30;
			else
				prd_2 = 0;
		
	if (prd_1 == prd_2)
		return 1;
	else if(prd_1 > prd_2)
		return 0;
	else
		return -1;
}	

void toInfix(char *expr)
{	PDescritor pdscrtr;
	init(&pdscrtr);
	char aux;
	int i, prd;
	for(i=0; i< strlen(expr); i++)
	{	if(!iscntrl(expr[i]))
		{	if(isdigit(expr[i]) || isalpha(expr[i]))
				printf("%c", expr[i]);
			else
			{	if(pdscrtr.topo == NULL)
					push(&pdscrtr, expr[i]);
					else{	prd = calcPrd(expr[i], pdscrtr.topo->oprnd); 
							if(prd == 1 || prd == -1)
							{	while((prd == 1 || prd == -1) ){
									aux = pop(&pdscrtr);
									printf("%c", aux);
									if(pdscrtr.topo == NULL)
										break;
									prd = calcPrd(expr[i], pdscrtr.topo->oprnd);
								}
								push(&pdscrtr, expr[i]);
							}else{	if(expr[i] == ')')
									{	while(pdscrtr.topo->oprnd != '(')
										{	aux = pop(&pdscrtr);
											printf("%c",  aux);
										}
										pop(&pdscrtr);
										
									}else{	push(&pdscrtr, expr[i]);
										 }
								}
						}
			}
		}
	}

	if(pdscrtr.qtde > 0)
	{	while(pdscrtr.qtde > 0)
		{	aux = pop(&pdscrtr);
			if(aux != '(' && aux != ')')
				printf("%c",  aux);
		}
	}
	printf("\n");
}
