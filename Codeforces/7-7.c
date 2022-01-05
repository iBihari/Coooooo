#include <stdio.h>

int main()
{
    int n, a = 0, b = 0, c = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        a += i;
    printf("%d\n", a);
    for (i = 1; i <= n; i++)
        if (i % 2 == 0)
            b += i;
    printf("%d\n", b);
    for (i = 1; i <= n; i++)
        if (i % 2 != 0)
            c += i;
    printf("%d", c);
    return 0;
}