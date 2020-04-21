#include <stdio.h>
#include <string.h>

void criptografar(char str[])
{
    int i;
    for(i = 0;i < strlen(str); i++)
    {
        int v = str[i];

        if(v >= 65 && v <= 77)
            str[i] += 13;
        else if(str[i] >= 97 && str[i] <= 109)
            str[i] += 13;
        else if(str[i] > 77 && str[i] <=90)
            str[i] -= 13;
        else if(str[i] > 109 && str[i] <=122)
            str[i] -= 13;

    }

    printf("%s\n", str);

}


int main()
{
   char str[60];

    while(gets(str) != NULL)
        criptografar(str);

   return 0;
}
