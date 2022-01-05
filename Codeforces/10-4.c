#include <stdio.h>

int b[11], c[11], a[11];

void chuyendoi(int n)
{
    int am = 0, duong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[duong] = a[i];
            duong++;
        }
        else
        {
            c[am] = a[i];
            am++;
        }
    }
    for (int i = 0; i < am; i++)
        printf("%d ", c[i]);
    printf("\n");
    for (int i = 0; i < duong; i++)
        printf("%d ", b[i]);
}

int main()
{
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a[i] = x;
    }

    chuyendoi(n);
}