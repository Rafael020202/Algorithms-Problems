#include <stdio.h>

int main()
{
  int c;

    for(c = 1; c <= 39; c++)
         printf("-");
    printf("\n");

    printf("|  decimal  |  octal  |  Hexadecimal  |\n");

    for(c = 1; c <= 39; c++)
         printf("-");
    printf("\n");

    for(c = 0; c <= 7; c++)
        printf("|      %d    |    %d    |       %d       |\n",c,c,c);

      printf("|      8    |   10    |       8       |\n");
      printf("|      9    |   11    |       9       |\n");
      printf("|     10    |   12    |       A       |\n");
      printf("|     11    |   13    |       B       |\n");
      printf("|     12    |   14    |       C       |\n");
      printf("|     13    |   15    |       D       |\n");
      printf("|     14    |   16    |       E       |\n");
      printf("|     15    |   17    |       F       |\n");

    for(c = 1; c <= 39; c++)
         printf("-");
    printf("\n");


 return 0;
}
