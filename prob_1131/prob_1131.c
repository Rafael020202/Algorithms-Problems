#include <stdio.h>

int main(){

    int golInter, golGremio, nGrenais = 0,vInter = 0,vGremio = 0,nEmpate = 0, resp;
    int controller = 0;

    scanf("%d %d", &golInter, &golGremio);

    if(golInter > golGremio)
        vInter++;
    else if(golInter < golGremio)
        vGremio++;
    else
        nEmpate++;

    nGrenais++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &resp);

   if(resp == 1){
        while(controller == 0){
            scanf("%d %d", &golInter, &golGremio);

            if(golInter > golGremio)
                vInter++;
            else if(golInter < golGremio)
                vGremio++;
            else
                nEmpate++;

            nGrenais++;


            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &resp);

            if(resp == 2)
                break;
        }
    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", nGrenais,vInter,vGremio,nEmpate);

    if(vInter > vGremio)
        printf("Inter venceu mais\n");
    else if (vInter < vGremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");


 return 0;
}
