#include <stdio.h>

int main()
{
    double qtd;
    int cont = 0, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &qtd);
        while (qtd > 1)
        {
            qtd = qtd / 2;
            cont++;
        }
        printf("%d dias\n", cont);
        cont = 0;
    }

    return 0;
}