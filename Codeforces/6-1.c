#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        printf("Ban vua nhap so le");
    }
    else
    {
        printf("Ban vua nhap so chan");
    }
    return 0;
}