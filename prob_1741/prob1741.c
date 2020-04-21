#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 2000002

struct pilha 
{   int info;
    struct pilha *prox;
};
typedef struct pilha Pilha;

struct descr
{   Pilha *topo;
    int qtd;
};
typedef struct descr PDescritor;

void init    (PDescritor*);
void push    (PDescritor*, int);
void calcula (PDescritor*, char, int*);
void print   (PDescritor*);
int  pop     (PDescritor*);
void clear   (char *);

int main()
{   PDescritor pdscrtr;
    char line[MAX];
    while(fgets(line, MAX, stdin) != NULL)
    {   int i, bug = -1;
        if(strlen(line) == 1 && line[0] == 10)
        {   printf("Invalid expression.\n");
            continue;
        }
        for(i=strlen(line); i >= 0; i--)
        {   if(!isspace(line[i]) && line[i] != '\0')
            {   if(isdigit(line[i]))
                {   push(&pdscrtr, line[i] - '0');
                }
                else
                {   if(pdscrtr.qtd <= 1)
                    {   bug = 0;
                        break;
                    }
                    calcula(&pdscrtr, line[i], &bug);
                }
            }
        }

        if(pdscrtr.qtd > 1)
        {   bug = 0;
        }

        switch (bug)
        {   case 0:
                printf("Invalid expression.\n");
                break;
            case 1:
                printf("Division by zero.\n");
                break;
            case -1:
                printf("The answer is %d.\n", pdscrtr.topo->info);
                break;
        }

        clear(line);
        init(&pdscrtr);
    }

    return 0;
}

void init(PDescritor *pd)
{   pd->topo = NULL;
    pd->qtd = 0;
}

void push(PDescritor *p, int val)
{   Pilha *aux = (Pilha*) malloc(sizeof(Pilha));
    
    aux->info = val;
    aux->prox = p->topo;
    
    p->topo = aux;
    p->qtd++;
 }

int pop(PDescritor *pdscrt)
{   Pilha *plhAux = pdscrt->topo;
    int vl = plhAux->info;
    
    pdscrt->topo = plhAux->prox;
    pdscrt->qtd--;
    free(plhAux);
    
    return vl;
}

void calcula(PDescritor *pdscrtr, char op, int *bug)
{  int aux = pop(pdscrtr);
    if(op == '+')
        pdscrtr->topo->info += aux;
        else if(op == '-')
            pdscrtr->topo->info -= aux; 
            else if(op == '*')
                pdscrtr->topo->info *= aux;
                else
                {   if(aux != 0)
                        pdscrtr->topo->info /= aux;
                    else
                        *bug = 1;
                }   
                    
}

void clear(char *str)
{   int i;
    for(i=strlen(str); i >= 0; i--)
    {   str[i] = '\0';
    }
}

void print(PDescritor *pdscrtr)
{   Pilha *aux = pdscrtr->topo; 
    while (aux != NULL)
    {   printf("%d ", aux->info);
        aux = aux->prox;
    }
    printf("QTDE: %d\n", pdscrtr->qtd);
    
}

