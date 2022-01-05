#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;
    printf("%.2f", d);

    return 0;
}