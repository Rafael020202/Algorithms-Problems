#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no {
    char str[60];
    int len;
    struct no *prox;
    struct no *ant;
} No;

typedef struct lista {
    No *inicio,*fim;
    int qtde;
} Lista;

void IniciaLista( Lista* );
void Inserir( Lista*, char*, int );
void Print( Lista* );

int inicio;

int main( ) {
    int nC, i, p;
    char c, str[60];
	Lista lst;

    scanf( "%d ", &nC );
    
	for ( i=0; i<nC; i++ ) {
        IniciaLista( &lst );
		p = 0;
		inicio = 1;
		
		while( 1 ) {
            
			c = getc(stdin);
			
			if( c == '\n' )
                break;
			
			if ( c != ' ' ) {
				str[p] = c;
				p++;
			}else {
				str[p] = '\0';
				Inserir( &lst, str, p );
				p = 0;
			}
		}
		str[p] = '\0';
		Inserir( &lst, str, p );
		
		Print( &lst );
    }

   

    return 0;
}

void IniciaLista( Lista *lst ) {
    lst->inicio = NULL;
    lst->qtde = 0;
}

void Inserir( Lista *lst, char *str, int size ) {
	No *aux = (No*) malloc( sizeof(No) ), *p;

	strcpy( aux->str, str );
	aux->len = size;
	aux->prox = NULL;
	aux->ant = NULL;
	

   if ( lst->inicio == NULL ) {
		lst->inicio = aux;
		lst->fim = aux;
   }else { 
		p = lst->inicio;
		
		while ( p != NULL && aux->len > p->len ) {	
			p = p->prox;
		}
		
		if( p == NULL ) {
			lst->fim->prox = aux;
			aux->ant = lst->fim;
			lst->fim = aux;
		}else if( p == lst->inicio ) {
			aux->prox = p;
			lst->inicio->ant = aux;
			lst->inicio = aux;
		}else {
			aux->ant = p->ant;
			p->ant->prox = aux;
			
			p->ant = aux;
			aux->prox = p;
		}		
   }
   lst->qtde++;
}

void Print( Lista *l ) {
	No *aux = l->fim;
	
	while ( aux != NULL ) {
		if ( inicio ) {
			printf( "%s", aux->str );
			inicio = 0;
		}else {
			printf( " %s", aux->str );
		}
		aux = aux->ant;
	}
	
	printf( "\n" );
	
}

