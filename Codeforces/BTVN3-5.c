#include <stdio.h>
int main()
{
    int c, A, B, C;
    scanf("%d", &c);
    A = c / 3600;
    B = (c % 3600) / 60;
    C = (c % 3600) % 60;
    if (A < 10)
    {
        printf("0%d:", A);
    }
    else
    {
        printf("%d:", A);
    }
    if (B < 10)
    {
        printf("0%d:", B);
    }
    else
    {
        printf("%d:", B);
    }
    if (C < 10)
    {
        printf("0%d", C);
    }
    else
    {
        printf("%d", C);
    }
    return 0;
}