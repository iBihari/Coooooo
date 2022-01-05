#include <stdio.h>

int main()
{
    float n, a = 0, i;
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
        a += 1 / i;
    printf("%.2f", a);

    return 0;
}