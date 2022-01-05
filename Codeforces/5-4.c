#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d", &a);
    printf("So dien tieu thu trong thang la: %d\n", a);
    for (int i = 1; i <= a; i++)
    {
        if (i < 51)
        {
            b += 500;
        }
        if (i >= 51 & i < 101)
        {
            b += 1000;
        }
        if (i >= 101 & i < 151)
        {
            b += 1200;
        }
        if (i >= 151 & i < 201)
        {
            b += 1600;
        }
    }
    printf("So tien phan tra la              : %d", b);
    return 0;
}