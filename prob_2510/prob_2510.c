#include <stdio.h>
#include <string.h>

int main(){
    char valor[100];
    int nTestes, l, cont;


    scanf("%d", &nTestes);


    for(cont = 0; cont < nTestes; cont++){
        scanf("%s", &valor);
        l = strlen(valor);

        if(l > 0 && l <= 25)
            printf("Y\n");
        else
            printf("N\n");

   }

  return 0;
}
