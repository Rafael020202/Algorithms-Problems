#include <stdio.h>

int main(){
    float sal,novoSal,reaj;
    int perc;
    char percSymbol = '%';
    scanf("%f", &sal);

    if(sal >= 0 && sal<=400 ){
        novoSal = sal + sal * 0.15;
        reaj = sal*0.15;
        perc = 15;

    }else if(sal > 400 && sal <= 800){
        novoSal = sal + sal * 0.12;
        reaj = sal*0.12;
        perc = 12;

    }else if(sal > 800 && sal <= 1200){
        novoSal = sal + sal * 0.10;
        reaj = sal*0.10;
        perc = 10;

    }else if(sal > 1200 && sal <= 2000){
        novoSal = sal + sal * 0.07;
        reaj = sal*0.07;
        perc = 7;

    }else if(sal > 2000){
        novoSal = sal + sal * 0.04;
        reaj = sal*0.04;
        perc = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %i %c\n", novoSal, reaj, perc,percSymbol);
    printf("%");

 return 0;
}
