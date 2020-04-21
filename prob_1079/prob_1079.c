#include <stdio.h>

int main(){
    int cont,test;
    float n1,n2,n3,media;
    scanf("%i", &test);

    for(cont = 1;cont <= test; cont++){
        scanf("%f %f %f",&n1,&n2,&n3);
        n1 = n1*2;
        n2 = n2*3;
        n3 = n3*5;
        media = (n1 + n2 + n3)/10;

        printf("%.1f\n", media);
    }

 return 0;
}
