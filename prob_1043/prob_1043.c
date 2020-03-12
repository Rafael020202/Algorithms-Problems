#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,mod1,mod2,mod3,perimetro,area;
  scanf("%f %f %f",&a,&b,&c);
  mod1 = fabs(b-c);
  mod2 = fabs(a-c);
  mod3 = fabs(a-b);

  if(mod1 < a && mod1 < b+c && mod2 < b && mod2 < a+c && mod3 < c && mod3 < a+b){
        perimetro = a+b+c;
        printf("Perimetro = %.1f\n", perimetro);
        }else {
            area = (a + b)*c/2;
            printf("Area = %.1f\n", area);
        }

 return 0;
}
