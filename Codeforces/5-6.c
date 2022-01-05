
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double d = pow(b, 2) - 4 * a * c;
    double e = (-b + sqrt(d)) / (2 * a);
    double f = (-b - sqrt(d)) / (2 * a);
    printf("%.2f\n%.2f", f, e);
    return 0;
}