#include <stdio.h>
#include <math.h>
int a[11], b[11];
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
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                max = b[j];
                b[j] = b[i];
                b[i] = max;
            }
        }
}
int mangbangnhau(int n)
{
    int x = 0;
    tang(n);
    for (int i = 0; i < n - 1; i++)
        if (a[i] != b[i])
        {
            return 0;
            break;
        }

    return 1;
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
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &x);
        b[i] = x;
    }
    if (mangbangnhau(n) == 1)
        printf("Co");
    if (mangbangnhau(n) == 0)
        printf("Khong");
}