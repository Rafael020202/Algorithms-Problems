#include <stdio.h>
#include <stdlib.h>

struct no { int val;
            struct no *dir;
            struct no *esq;
          };
typedef struct no No;

#define TRUE 1
#define FALSE 0

struct arv { No *raiz; };
typedef struct arv Arv;


void iniciaArv( Arv *r );
No** achaPai( No*, int );
void inserir( Arv*, int );
void prefixo( No* );
void infixo( No* );
void posfixo( No* );
void limpaArv( No* );

int primeiro;

int main()
{   int n, c, aux, i01, i02;
    
    Arv arv;
    iniciaArv( &arv );

    scanf("%d", &c);

    for(i01 = 0; i01 < c; i01++)
    {   primeiro = TRUE;
        scanf("%d", &n);
        
        for(i02 = 0; i02 < n; i02++)
        {   scanf("%d", &aux);
            inserir( &arv, aux );
        }

        printf("Case %d:\n", i01+1);
        
        printf("Pre.: ");
        prefixo( arv.raiz );    
        printf("\n");

        printf("In..:");
        infixo( arv.raiz );
        printf("\n");

        printf("Post:");
        posfixo( arv.raiz );
        printf("\n");

        limpaArv(arv.raiz);
        iniciaArv( &arv );
        printf("\n");

    }
    
    return 0;
}

void iniciaArv( Arv *r )
{   r->raiz = NULL;
}

No** achaPai (No *r, int v )
{   if( r == NULL )
        return NULL;
    else
        if( v <= r->val )
            if( r->esq == NULL )
                return &r->esq;
            else
                return achaPai( r->esq, v );
        else
            if( r->dir == NULL )
                return &r->dir;
            else
                return achaPai( r->dir, v );
}


void inserir( Arv *r, int v )
{   No *aux = (No*) malloc(sizeof(No)), **pai;   
    
    aux->val = v;
    aux->dir = NULL;
    aux->esq = NULL;

    pai = achaPai( r->raiz, v );
    
    if( pai == NULL ) r->raiz = aux;
    else *pai = aux;
}

void prefixo( No *r )
{   if( r != NULL )
    {   if(primeiro)
        {   printf("%d", r->val);
            primeiro = FALSE;
        }
        else
            printf(" %d", r->val);

        prefixo(r->esq);
        prefixo(r->dir);
    }
}

void infixo( No *r )
{   if( r != NULL )
    {   infixo(r->esq);
        
        if(primeiro)
        {   printf("%d", r->val);
            primeiro = FALSE;
        }
        else
            printf(" %d", r->val);
        
        infixo(r->dir);
    }
}

void posfixo( No *r )
{   if( r != NULL )
    {   posfixo(r->esq);
        posfixo(r->dir);

        if(primeiro)
        {   printf("%d", r->val);
            primeiro = FALSE;
        }
        else
            printf(" %d", r->val);
    }
}

void limpaArv(No *r)
{   if(r != NULL)
    {   limpaArv(r->esq);
        limpaArv(r->dir);
        free( r );
    }
}





