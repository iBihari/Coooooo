#include <stdio.h>

int main()
{

    int n, i, j, s = 0;

    do
    {

        printf("Nhap n: ");

        scanf("%d", &n);

    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            if (j * j == i)

                s = s + i;
        }
    }

    printf("\nTong la %d", s);
}