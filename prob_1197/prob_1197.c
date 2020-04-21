#include <stdio.h>

int space(int v, int t)
{
    return v * (2 * t);
}

int main()
{
    int v, t, s;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        s = space(v, t);
        printf("%d\n", s);
    }

    return 0;
}