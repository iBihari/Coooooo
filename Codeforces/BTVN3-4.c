#include<stdio.h>
int main()
{
    double r,pi;
    pi = 3.141592653589793;
    scanf("%lf",&r);
    printf("%.4f", 4*pi*r*r);
    printf("\n%.4lf",(4.0/3.0)*pi*r*r*r);
    return 0;

}