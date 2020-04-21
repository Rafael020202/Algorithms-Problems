#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

struct no { char valor;
            struct no *dir;
            struct no *esq;
          };
typedef struct no No;

struct tree {   No *raiz;
            };
typedef struct tree Tree;


void inserir(Tree*, char);
No** achaPai(No*, char);
int criaNo(No**, char);
void prefixa(No*);
void infixa(No*);
void posfixa(No*);
int pesquise(No*, char);
void initTree(Tree*);

int primeiro;

int main()
{   char operacao[20];
    char aux_1,aux_2;
    Tree arv;

    initTree(&arv);

    while(fgets(operacao,20, stdin) != NULL)
    {   primeiro = TRUE;
     
        operacao[strlen(operacao) - 1] = '\0';
        
        if(strcmp(operacao, "POSFIXA") == 0)
        {   posfixa(arv.raiz);
            printf("\n");
        }
        else if(strcmp(operacao, "INFIXA") == 0)
        {   infixa(arv.raiz);
            printf("\n");
        }
        else if(strcmp(operacao, "PREFIXA") == 0)
        {   prefixa(arv.raiz);
            printf("\n");
        }
        else
        {   aux_1 = operacao[0];
            aux_2 = operacao[2]; 

            if(aux_1 == 'I')
            {   inserir(&arv, aux_2);    
            }
            else
            {   if(pesquise(arv.raiz, aux_2))
                    printf("%c existe\n", aux_2);
                else
                    printf("%c nao existe\n", aux_2);    
            }
        
        }  
    }
    return 0;
}

void initTree(Tree *t){
    t->raiz = NULL;
}

int criaNo(No **no, char vlr)
{   *no = (No*) malloc(sizeof(No));
    
    if(no == NULL)
        return FALSE;
    
    (*no)->dir = NULL;
    (*no)->esq = NULL;
    (*no)->valor = vlr;

    return TRUE;    
}

void inserir(Tree *arv, char vlr)
{   No **pai, *aux;
 
    criaNo(&aux, vlr);

    pai = achaPai(arv->raiz, vlr);    
    if(pai == NULL)
        arv->raiz = aux;
    else
        *pai = aux;
}


No **achaPai(No *r, char v)
{   if(r == NULL)
        return NULL;
    else
        if(v <= r->valor)
            if(r->esq == NULL)
                return &r->esq;
            else
                return achaPai(r->esq, v);
        else
            if(r->dir == NULL)
                return &r->dir;
            else
                return achaPai(r->dir, v);
}

void prefixa(No *r)
{   if(r != NULL)
    {   if(primeiro)
        {   printf("%c", r->valor);
            primeiro = FALSE;
        }
        else
        {   printf(" %c", r->valor);
        }

        prefixa(r->esq);
        prefixa(r->dir);
    }
}

void infixa(No *r)
{   if(r != NULL)
    {   infixa(r->esq);
        
        if(primeiro)
        {   printf("%c", r->valor);
            primeiro = FALSE;
        }
        else
        {   printf(" %c", r->valor);
        }
        
        infixa(r->dir);
    }
}

void posfixa(No *r)
{   if(r != NULL)
    {   posfixa(r->esq);
        posfixa(r->dir);

        if(primeiro)
        {   printf("%c", r->valor);
            primeiro = FALSE;
        }
        else
        {   printf(" %c", r->valor);
        }

    }
}

int pesquise(No* raiz, char v)
{   if(raiz == NULL)
        return FALSE;
    else{
        if(raiz->valor == v)
            return TRUE;
        else
            if(v <= raiz->valor)
                return pesquise(raiz->esq, v);
            else
                return pesquise(raiz->dir, v);
    }
}