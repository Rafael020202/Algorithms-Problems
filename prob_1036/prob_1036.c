#include <stdio.h>
#include <math.h>

int main(){
 double a,b,c,delta,raiz1,raiz2,r1,r2;

 scanf("%lf %lf %lf", &a, &b, &c);
 delta = (pow(b,2) - (4*a*c));

 if(delta < 0 || a ==0){
   printf("Impossivel calcular\n");

 }else{

 raiz1 = (-1*b + sqrt(delta));
 r1 = raiz1/(2*a);
 printf("R1 = %.5f\n", r1);

 raiz2 = (-1*b - sqrt(delta));
 r2 = raiz2/(2*a);
 printf("R2 = %.5f\n", r2);
 }

return 0;
}
