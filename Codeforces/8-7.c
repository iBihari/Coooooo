#include <stdio.h>

int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int BCNN(int a, int b)
{
    int result = a * b / UCLN(a, b);
    return result;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", BCNN(a, b));
    return 0;
}