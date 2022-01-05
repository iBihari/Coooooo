#include<stdio.h>
#include<math.h>
int main()
{
    int n = 21012038;
    int tong = 0;
    for (int i = 1; i <= sqrt(n); i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                tong += i;
        }
    }
    printf("%d\n", tong);
    return tong;
}