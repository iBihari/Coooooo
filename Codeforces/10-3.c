#include <stdio.h>
#include <math.h>
int a[11];

void tang(int n)

{
    int max;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                max = a[j];
                a[j] = a[i];
                a[i] = max;
            }
        }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void giam(int n)
{
    int max;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                a[j] = a[i];
                a[i] = max;
            }
        }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void giamtd(int n)
{
    int max;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i]) < abs(a[j]))
            {
                max = a[j];
                a[j] = a[i];
                a[i] = max;
            }
        }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{

    int n, x, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)

    {
        scanf("%d", &b);
        a[i] = b;
    }
    tang(n);
    giam(n);
    giamtd(n);
}