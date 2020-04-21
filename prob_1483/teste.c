#include <stdio.h>
#include <math.h>
#include <string.h>

int condicao1(unsigned long long int n1, unsigned long long int n2){

    n1 = n1%10000;
    n2 = n2%10000;

    if(n1 == n2)
        return 1;
    else
        return 0;
}

int condicao2(int n1, int n2){

    n1 = n1%1000;
    n2 = n2%1000;

    if(n1 == n2)
        return 1;
    else
        return 0;

}

int condicao3(int n1, int n2){

    n1 = n1%100;
    n2 = n2%100;

    if(n1 == n2)
        return 1;
    else
        return 0;

}

int condicao4(int n1, int n2){

    n1 = n1%100;
    if(n1 == 0)
        n1 = n1 + 100;

    n2 = n2%100;
    if(n2 == 0)
        n2 = n2 + 100;

    if(n1 < n2 && (n2 - n1) <= 3)
        return 1;
    else if(n1 > n2 && (n1 - n2) <= 3)
        return 1;
    else
        return 0;
}


int main(){

   double v;
   int cont = 1;
   unsigned long long int n, m;

while(cont == 1){
    scanf("%lf %llu %llu", &v, &n ,&m);
    if(v == 0 && n == 0 && m == 0){
        break;
    }

   if(condicao1(n,m)){
        v = v * 3000;
        printf("%.2lf\n", v);
   }
   else if(condicao2(n,m)){
        v = v * 500;
        printf("%.2lf\n", v);
   }
   else if(condicao3(n,m)){
        v = v * 50;
        printf("%.2lf\n", v);
   }
   else if(condicao4(n,m)){
        v = v * 16;
        printf("%.2lf\n", v);
   }

    else
        printf("0.00\n");
   }


 return 0;
}
