#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float e, ep;
    scanf("%f", &ep);
    e = 1;
    for (i = 1; 1 < 100; i++)
    {
        e += (pow(-1.0, i) * (1.0 / (2 * i + 1)));
        if (ep > 1.0 / (2 * i + 1))
            break;
    }
    printf("%.2f", 4 * e);
    return 0;
}