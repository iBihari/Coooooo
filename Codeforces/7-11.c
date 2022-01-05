#include <stdio.h>

int main()
{
    int i, n, a;
    double e, ep;
    do
    {
        scanf("%lf", &ep);
    } while (ep <= 0 || ep >= 1);
    a = 1;
    e = 1;
    for (i = 1; 1 < 1000; i++)
    {
        a *= i;
        e += 1.0 / a;
        if (1.00 / a < ep)
            break;
    }
    printf("%.2f", e);
    return 0;
}
