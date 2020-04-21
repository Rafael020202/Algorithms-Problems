#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {	char vlr;
					struct no *prox;
				  } No;

typedef struct pilha {	No *topo;
						int qtde;
					 } Pilha;

void iniciaPilha( Pilha* );
void push( Pilha*, char );
void pop( Pilha* );
char obterTopo( Pilha* );
//void imprime( Pilha* );
int BuscarLigacoes( Pilha* );

int main( ) 
{	Pilha pIn;
	iniciaPilha( &pIn );
	
	char str[310];
	int i, qtde;
	
	while( scanf("%s", str) != EOF ) 
	{	for( i=0; i<strlen(str); i++ )
		{	push( &pIn, str[i] );
		}
		qtde = BuscarLigacoes( &pIn );
		printf("%d\n", qtde);
		
		iniciaPilha( &pIn );
	}
	return 0;
}

void iniciaPilha( Pilha *plh ) 
{	plh->topo = NULL;
	plh->qtde = 0;
}

void push( Pilha *plh, char c ) 
{	No *aux = ( No* ) malloc( sizeof(No) );  
	aux->vlr = c;
	aux->prox = plh->topo;
	
	plh->topo = aux;
	plh->qtde++;
}

void pop( Pilha *plh ) 
{	No *aux = plh->topo;
	
	plh->topo = aux->prox;
	plh->qtde--;
	
	free( aux );
}

char obterTopo( Pilha *plh )
{	if( plh->topo != NULL )
		return plh->topo->vlr;
	else
		return '0';
}

/*void imprime( Pilha *plh )
{	No *aux = plh->topo;
	
	while( aux != NULL )
	{	printf("%c\n", aux->vlr);
		aux = aux->prox;
	}
}*/

int BuscarLigacoes( Pilha *pIn )
{	Pilha pAux;
	iniciaPilha( &pAux );
	
	char aux01, aux02, aux03;
	int cont = 0;
	
	while( pIn->qtde > 0 )
	{	aux01 = obterTopo( pIn );
		aux02 = obterTopo( &pAux );
		
		pop( pIn );
		
		aux03 = obterTopo( pIn );
		
		if( (aux01 == 'C' && aux02 == 'F') ||
			(aux01 == 'F' && aux02 == 'C') ||
			(aux01 == 'B' && aux02 == 'S') ||
			(aux01 == 'S' && aux02 == 'B') 
		  )
		{	cont++;
			pop( &pAux );
		}
		else if ((aux01 == 'C' && aux03 == 'F') ||
				 (aux01 == 'F' && aux03 == 'C') ||
				 (aux01 == 'B' && aux03 == 'S') ||
				 (aux01 == 'S' && aux03 == 'B')  
				) 
		{	cont++;
			pop( pIn );
		}
		
		else 
		{	push( &pAux, aux01 );
		}
		
	}
	return cont;
}


