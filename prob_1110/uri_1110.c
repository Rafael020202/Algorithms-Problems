#include <stdio.h>
#include <stdlib.h>

typedef struct no { int val;
                    struct no *prox;
                  } No;

typedef struct fila {   No *inicio, *fim;
                        int qtde;
                    } Fila;

void iniciaFila( Fila* );
void insere( Fila*, int );
void deleta( Fila*, Fila* );
void imprime( Fila*, int );

int main( ) {
    
    Fila f01, f02;
    iniciaFila( &f01 );
    iniciaFila( &f02 );

    int v, i;
    while( 1 ) {
        scanf( "%d", &v );
        
        if( v == 0 ) 
            break;

        for( i=1; i <= v; i++ ) {
            insere( &f01, i );
        }

        while ( f01.qtde > 1 ) {
            deleta( &f01, &f02 );
        }

        imprime( &f02, 0 );
        imprime( &f01, 1 );

        iniciaFila( &f01 );
        iniciaFila( &f02 );
    } 
    return 0;
}

void iniciaFila( Fila *f ) { 
    f->inicio = NULL;
    f->qtde = 0;
}

void insere( Fila *f, int v ) {
    No *aux = ( No* ) malloc( sizeof(No) ); 
    aux->val = v;
    aux->prox = NULL;

    if( f->inicio == NULL ) 
        f->inicio = aux;
    else
        f->fim->prox = aux;

    f->fim = aux;
    f->qtde++;
}

void deleta( Fila *f, Fila *lixo ) {
    No *aux01 = f->inicio;
    No *aux02 = aux01->prox;

    f->inicio = aux02->prox;

    insere( f, aux02->val );
    insere( lixo, aux01->val );

    f->qtde -= 2;
   
    free( aux01 );
    free( aux02 );
}

void imprime( Fila *f, int v ) {

    if( v == 0 ) {
        No *aux = f->inicio;
        printf( "Discarded cards:" );
        while( aux != NULL ) {
            if( aux->prox != NULL )
                printf( " %d,", aux->val );
            else
                printf( " %d", aux->val );
            aux = aux->prox;
        }
        printf( "\n" );
    }else {
        printf( "Remaining card: %d\n", f->inicio->val );
    }
}





