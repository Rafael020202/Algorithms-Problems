#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    int value;
    struct no *prox;
} NO;

typedef struct pilha {
    NO *topo;
} PILHA;

void IniciarPilha(PILHA*);
void Push(PILHA*, int);
void Pop(PILHA*);
int GetValue(PILHA*);
int Vazia(PILHA*);

int main() {
    PILHA p, pMin;

    IniciarPilha(&p);
    IniciarPilha(&pMin);

    int i;
    int qtde, v, aux;
    char op[5];

    scanf("%d", &qtde);

    for ( i = 0; i < qtde; i++){
        scanf(" %s", op);
        
        if ( strcmp(op, "PUSH") == 0 ) {
            scanf(" %d", &v);

            Push(&p, v);

            if ( Vazia(&pMin) ) 
                Push(&pMin, v);
            else{
                aux = GetValue(&pMin);

                if ( v < aux)
                    Push(&pMin, v);
                else
                    Push(&pMin, aux);
            }
        }
        else if ( strcmp(op, "POP") == 0 ) {
            if ( Vazia(&p) ) 
                printf("EMPTY\n");
            else {
                Pop(&p);
                Pop(&pMin);
            }
        }
        else {
            if ( Vazia(&p) )
                printf("EMPTY\n");
            else
                printf("%d\n", GetValue(&pMin));
        }


    }
    
    return 0;
}

int Vazia(PILHA *p){
    return p->topo == NULL;
}

void IniciarPilha(PILHA *p){
    p->topo = NULL;
}

void Push(PILHA *p, int v){
    NO *aux = (NO*) malloc(sizeof(NO));
    aux->value = v;
    aux->prox = p->topo;

    p->topo = aux;
}

void Pop(PILHA *p) {
    NO *aux = p->topo;
    p->topo = aux->prox;

    free(aux);
}

int GetValue(PILHA *p){
    return p->topo->value;
}

