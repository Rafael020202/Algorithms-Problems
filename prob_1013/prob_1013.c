#include <stdio.h>
#include <math.h>

int main(){

 int a,b,c,media;

 scanf("%i", &a);
 scanf("%i", &b);
 scanf("%i", &c);

 media = (a+b+abs(a-b))/2.0;

    if(media < c){
        printf("%i eh o maior\n", c);
    }
        else {
            printf("%i eh o maior\n", media);
        }

return 0;
}
