#include <stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    scanf("%c%d%f%lf", &a, &b, &c, &d);
    printf("%c\n%d\n%.2f\n%.2f", a, b, c, d);
    return 0;
}