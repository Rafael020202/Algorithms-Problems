#include <stdio.h>

int main(){

int n,anos,meses,dias;

 scanf("%i",&n);

 if (n >= 365){
    anos = n/365;
    meses = (n%365)/30;
    dias = (n%365)%30;

    printf("%i ano(s)\n",anos );
    printf("%i mes(es)\n",meses);
    printf("%i dia(s)\n", dias);

        }else if(n >=30){
            anos = 0;
            meses = n/30;
            dias = n%30;

            printf("%i ano(s)\n",anos );
            printf("%i mes(es)\n",meses);
            printf("%i dia(s)\n", dias);
                }else if (n < 30){
                    anos = 0;
                    meses = 0;
                    dias = n;

                    printf("%i ano(s)\n",anos );
                    printf("%i mes(es)\n",meses);
                    printf("%i dia(s)\n", dias);

                }

 return 0;
}
