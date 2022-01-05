#include <stdio.h>
#include <math.h>
int a[11], b[11], c[11];

int socucdai(int n)
{
    int t = 0;

    for (int i = 0; i < n; i++)

        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            t += a[i];

    return t;
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

    printf("%d", socucdai(n));
}