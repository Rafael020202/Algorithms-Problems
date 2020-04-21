#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct no  {    int val;
                struct no *esq;
                struct no *dir;
           };
typedef struct no No;

struct lno { No *info;
             struct lno *prox;
           };
typedef struct lno LNo;

struct lista { LNo *inicio, *final; };
typedef struct lista Lista;

struct arv { No *raiz; };
typedef struct arv Arv;

void iniciaArv( Arv* );
No** achaPai( No*, int );
void inserir( Arv*, int );
void limpaArv(No *r);
int vazia( Lista* );
void iniciaLista( Lista* );
void push( Lista*, No* );
void pop( Lista* );
void bfs( No* );

int primeiro;

int main()
{   Arv arv;
    iniciaArv(&arv);

    int c, n, aux, i1, i2;

    scanf("%d", &c);

    for(i1 = 0; i1 < c; i1++)
    {   scanf("%d", &n);

        for(i2 = 0; i2 < n; i2++)
        {   scanf("%d", &aux);
            inserir(&arv, aux);
        }
        printf("Case %d:\n", i1+1);
        bfs(arv.raiz);
        printf("\n\n");

        limpaArv(arv.raiz);
        iniciaArv(&arv);
    }

    return 0;
}

void iniciaArv(Arv *arv)
{   arv->raiz = NULL;
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

void limpaArv(No *r)
{   if(r != NULL)
    {   limpaArv(r->esq);
        limpaArv(r->dir);

        free( r );
    }
}

void iniciaLista( Lista *lst )
{   lst->inicio = NULL;
}

void push( Lista *p, No *node )
{   LNo *aux;
    
    aux = (LNo*) malloc(sizeof(LNo));
    aux->info = node;
    aux->prox = NULL;
    
    if(p->inicio == NULL)
        p->inicio = aux;
    else
        p->final->prox = aux;

    p->final = aux;

}

void pop( Lista *lst )
{   LNo *aux = lst->inicio;

    lst->inicio = aux->prox;

    free( aux );
}

int vazia(Lista *lst)
{   return (lst->inicio == NULL);
}

void bfs(No *r)
{   No *aux;
    
    printf("%d", r->val);

    Lista lst;
    iniciaLista(&lst);

    push(&lst, r->esq);
    push(&lst, r->dir);

    while ( !vazia( &lst ) )
    {   aux = lst.inicio->info;
        pop( &lst );

        if( aux == NULL )
            continue;
        
        
        printf(" %d", aux->val);

        push( &lst, aux->esq );
        push( &lst, aux->dir );
    }
}



