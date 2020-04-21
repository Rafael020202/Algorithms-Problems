#include <stdio.h>
#include <string.h>

void calculaLed(char str[102]){
    int i, res = 0;
    for(i = 0; i < strlen(str);i++){

            if(str[i] == '0')
                res += 6;
            else if(str[i] == '1')
                res += 2;
            else if(str[i] == '2')
                res += 5;
            else if(str[i] == '3')
                res += 5;
            else if(str[i] == '4')
                res += 4;
            else if(str[i] == '5')
                res += 5;
            else if(str[i] == '6')
                res += 6;
            else if(str[i] == '7')
                res += 3;
            else if(str[i] == '8')
                res += 7;
            else if(str[i] == '9')
                res += 6;
        }
     printf("%i leds\n", res);
}

int main()
{
   char str[102];
   int i, res = 0, nVezes,j;

   scanf("%i", &nVezes);


   for(j = 1; j <= nVezes; j++){
        scanf("%s", str);
        calculaLed(str);
    }



   return 0;
}
