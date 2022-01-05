#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    double a = ((x + y + sqrt(z)) / (pow(x, 2) + pow(y, 2) + 1)) - fabs(sin(x) - z * cos(y));
    printf("%.2f", a);
    return 0;
}