#include <stdio.h>
#include <stdlib.h>

int cmp(const void *v1, const void *v2)
{   int *i = (int*) v1, *j = (int*) v2;

    if(*i > *j)
        return -1;
        else if(*i < *j)
            return 1;
            else
                return 0;
            
}

int main()
{   int alunos[1005], vAux[1005], nAlunos,qtde=0, nT=0, nTAux,i, aux;
    
    scanf("%d", &nT);
    for(nTAux = 0; nTAux < nT; nTAux++)
    {   scanf("%d", &nAlunos);
        for(i = 0; i< nAlunos; i++)
        {   scanf("%d", &aux);
            alunos[i] = aux;
            vAux[i] = aux;
        }
        qsort(alunos,nAlunos,sizeof(int),cmp);
        for(i = 0; i < nAlunos; i++)
        {   if(vAux[i] == alunos[i])
            { qtde++;
            }
        }
        printf("%d\n", qtde);
        qtde = 0;
    }
    return 0;
}

