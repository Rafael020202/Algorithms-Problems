#include <stdio.h>

int main()
{
  int c;

  for(c = 1; c <= 39; c++)
  {
    printf("-");
  }
  printf("\n");

  printf("|x = 35                               |\n");
  printf("|                                     |\n");
  printf("|               x = 35                |\n");
  printf("|                                     |\n");
  printf("|                               x = 35|\n");

  for(c = 1; c <= 39; c++)
  {
    printf("-");
  }
  printf("\n");

  return 0;
}
