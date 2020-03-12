#include <stdio.h>

int main(){

double na,nb,nc,media;

    scanf("%lf %lf %lf", &na, &nb, &nc);
    media = (na*2 + nb*3 + nc*5)/10;

    printf("MEDIA = %.1lf\n", media);

 return 0;
}
