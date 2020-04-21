#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct lista 
{	int info;
	struct lista *prox;
};

typedef struct lista Lista;

struct pilha
{	Lista *topo;
};

typedef struct pilha Pilha;

void initPilha(Pilha *p);
void pop(Pilha *p);
void push(Pilha *p, int v);
int  contain(Pilha*, int);
int  isPosssible(Pilha, int);

int main()
{	Pilha vagoes;
	initPilha(&vagoes);
	
	int nVagoes, v=0, aux=1;
	scanf("%d", &nVagoes);
	
	while(nVagoes != 0)
	{	while(aux != 0)
		{	scanf("%d", &aux);
			push(&vagoes, aux);
			v++;
			
			if(v == nVagoes)
			{	if(isPosssible(vagoes, nVagoes))
					puts("Yes");
				else
					puts("No");
				v = 0;
			}
		}
		scanf("%d", &nVagoes);
		printf("\n");
		v=0;
		aux=1;
	}
		
	return 0;
}

void initPilha(Pilha *p)
{	p->topo = NULL;
}

void push(Pilha *p, int v)
{	Lista *aux = (Lista*) malloc(sizeof(Lista));
	aux->info = v;
	aux->prox = p->topo;
	p->topo = aux;
}

void pop(Pilha *p)
{	Lista *aux = p->topo;
	p->topo = aux->prox;
	
}

int contain(Pilha *p, int v)
{	Lista *aux = p->topo;
	while(aux != NULL)
	{	if(aux->info == v)
			return TRUE;
		aux = aux->prox;
	}
	
	return FALSE;
	
}

int isPosssible(Pilha vagoes, int nVagoes)
{	Pilha estB, estacao, estP;
	initPilha(&estB);
	initPilha(&estP);
	initPilha(&estacao);
	
	int v = nVagoes;
	Lista *listAux = vagoes.topo;
	
	while(v > 0)
	{	if(!contain(&estP, v))
		{	while(listAux->info != v)
			{	push(&estP, listAux->info);
				push(&estacao, listAux->info);
				listAux = listAux->prox;
				pop(&vagoes);
			}
			push(&estB, v);
			listAux = listAux->prox;
			pop(&vagoes);
		}else{
			push(&estB,estacao.topo->info);
			pop(&estacao);
		}
		
		v = v - 1;
	}
	
	Lista *aux = estB.topo;
	for(v=1; v<nVagoes; v++)
	{	if(aux->info  != v)
		{	return FALSE;
		}
		
		aux = aux->prox;
	}
	
	return TRUE;
}
