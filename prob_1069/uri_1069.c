#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
	char value;
	struct no *prox;
} No;

typedef struct pilha {
	No *topo;
} Pilha;

void IniciaPilha( Pilha* );
void Push( Pilha*, char );
void Pop( Pilha* );
int Vazia( Pilha* );
char GetTopo( Pilha* );
int QtdeDiamantes( Pilha* );

int main( ) {
	char Input[1001], c;
	int i01, i02, n, cStr, aux;
	Pilha pIn;
	
	IniciaPilha( &pIn );
	cStr = 0;
	
	scanf( "%d", &n );
	for ( i01=0; i01<n; i01++ ) {
		scanf( "%s", Input );
		
		for ( i02=0; i02<strlen(Input); i02++ ) {
			if ( Input[i02] != '.' ) {
				Push( &pIn, Input[i02] );
			}
		}
		
		aux = QtdeDiamantes( &pIn );
		printf( "%d\n", aux );
	}
	
	return 0;
}

void IniciaPilha( Pilha *plh ) {
	plh->topo = NULL;
}

void Push( Pilha *plh, char v ) {
	No *aux = ( No* ) malloc( sizeof(No) );
	aux->value = v;
	aux->prox = plh->topo;
	
	plh->topo = aux;
}

void Pop( Pilha *plh ) {
	No *aux = plh->topo;
	plh->topo = aux->prox;
	
	free( aux );
}

char GetTopo( Pilha *plh ) {
	return plh->topo->value;
}

int Vazia( Pilha *plh ) {
	return plh->topo == NULL;
}

int QtdeDiamantes( Pilha *pIn ) {
	Pilha pAux;
	char aux;
	int cont;
	
	cont = 0;
	IniciaPilha( &pAux );
	
	while ( !Vazia( pIn ) ) {
		aux = GetTopo( pIn );
		Pop( pIn );
		
		if ( !Vazia( pIn ) && aux == '>' && GetTopo( pIn ) == '<' ) {
			cont++;
			Pop( pIn );
		}else if ( !Vazia( &pAux ) && GetTopo( &pAux ) == '>' && aux == '<' ) {
			cont++;
			Pop( &pAux );
		}else {
			Push( &pAux, aux );
		}	
	}
	
	return cont;
}
