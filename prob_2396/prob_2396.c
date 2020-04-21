#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,m,i1,i2,menor;
    scanf("%d%d",&n,&m);

    struct corrida {
        int idCarro;
        int tempo;
    };

    struct corrida carro[n],aux;
    int soma = 0,cont;

    for(i1 = 0; i1 < n; i1++){
        for(i2 = 0;i2 < m;i2++){
            scanf("%d",&cont);
            soma += cont;
        }
        carro[i1].idCarro = i1;
        carro[i1].tempo = soma;
        soma = 0;
    }
 i1 = 0;
 while (i1 < n){
    i2 = i1 + 1;
    menor = i1;
    while(i2 < n){
        if(carro[i2].tempo < carro[menor].tempo)
            menor = i2;
        i2++;
    }
    aux = carro[i1];
    carro[i1] = carro[menor];
    carro[menor] = aux;
    i1++;
 }

  for(i1 = 0; i1 < 3; i1++)
    printf("%d\n",carro[i1].idCarro + 1);

  return 0;
}
