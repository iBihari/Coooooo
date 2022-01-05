#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("KHONG");
    }
    else if (n == 2)
    {
        printf("CO");
    }
    else
        for (i = 3; i <= n; i += 2)
        {
            if (n % i == 0)
                break;
        }
    if (n == i)
    {
        printf("CO");
    }
    else
    {
        printf("KHONG");
    }
    return 0;
}