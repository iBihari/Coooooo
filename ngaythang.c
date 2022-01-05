#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a < 10)
    {
        printf("0%d/", a);
    }
    else
    {
        printf("%d/", a);
    }
    if (b < 10)
    {
        printf("0%d/", b);
    }
    else
    {
        printf("%d/", b);
    }
    if (c < 10)
    {
        printf("000%d", c);
    }
    else if( c<100)
    {
        printf("00%d", c);
    }
    else if(c<1000)
    {
        printf("0%d", c);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}