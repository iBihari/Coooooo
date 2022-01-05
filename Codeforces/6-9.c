#include <stdio.h>

int main()
{
    int y, b;
    scanf("%d", &b);
    scanf("%d", &y);
    int a = y - b;
    if (a < 6 && a > 0)
    {
        printf("Tre em");
    }
    else if (a >= 6 && a < 11)
    {
        printf("Hoc sinh cap 1");
    }
    else if (a >= 11 && a < 15)
    {
        printf("Hoc sinh cap 2");
    }
    else if (a >= 15 && a < 18)
    {
        printf("Hoc sinh cap 3");
    }
    else if (a >= 18 && a < 40)
    {
        printf("Thanh nien");
    }
    else if (a >= 40 && a < 60)
    {
        printf("Trung nien");
    }
    else if (a >= 60)
    {
        printf("Nguoi gia");
    }
    else
    {
        printf("Nhap sai");
    }
    return 0;
}