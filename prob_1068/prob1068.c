#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define MAX 1010

struct lista 
{   int info[MAX];
    int qtd;
    int qtdInfo;
};
typedef struct lista Lista;


void init(Lista*);
void print(Lista);
void include(Lista*, int);
int isCorrect(Lista);

int main()
{   Lista l;
    init(&l);

    int i;
    char aux[1010];
    while(scanf("%s", aux) != EOF)
    {   for(i=0; i<strlen(aux); i++){
            if(aux[i] == '(' || aux[i] == ')')
            {   include(&l, aux[i]);
            }
        }
        if(isCorrect(l)){
            puts("correct");
            }else{
                puts("incorrect");
            }

        l.qtd = 0;
        l.qtdInfo = 0;
        
    }
    return 0;
}

void init(Lista *l)
{   l->qtd = 0;
    l->qtdInfo = 0;
}

void include(Lista *l, int c)
{   l->info[l->qtd] = c;
    l->qtd++;
    if(c == 40){
        l->qtdInfo++;
    }
}

void print(Lista l)
{   int i;
    for(i=0; i < l.qtd ; i++)
    {   printf("%d", l.info[i]);
    }
    printf("\n");
}

int isCorrect(Lista l)
{   if(l.qtd%2 != 0 || l.info[0] == ')' || l.info[l.qtd - 1] == '(')
    {   return FALSE;
    }else{
        int i=0, u=1;
        Lista aux = l;
        while(i < l.qtd && u < l.qtd && l.qtdInfo > 0)
        {   while(aux.info[u] != ')' && u < aux.qtd)
            {   u++;
            }

            if(u > (l.qtd-1))
                break;

            aux.info[u] = 0;
            l.qtdInfo--;
            i++;

            if(l.qtdInfo > 0)
            {   while(l.info[i] != '(')
                {   i++;
                }
                u = i+1;
            }
        }

        if(l.qtdInfo == 0)
            return TRUE;
        else
            return FALSE;
        
    }
}



