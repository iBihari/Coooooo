#include <stdio.h>
#include <math.h>
int menu()
{
    printf("Cac bai thi:\n");
    printf("1. Bai so 3.\n");
    printf("2. Bai so 8.\n");
    printf("3. Bai sp 10.\n");
    printf("Hay chon bai thi:\n");
    int bt;
    scanf("%d", &bt);
    return bt;
}

int bai3()
{
    int n, m;
    if (n < 2)
        return 0;
    else
    {
        for (m = 2; m <= sqrt(n); m++)
        {
            if (n % m == 0)
                return 0;
        }
        return 1;
    }
}
int tong(int n)
{
    int sum = 0;
    for (int m = 1; m <= floor(sqrt(n)); m++)
    {
        sum += m;
    }
    return sum;
}
int tongcacso()
{
    int a;
    scanf("%d", &a);
    printf("Tong cac so nguyen to:%d", tong(a));
}

int main()
{
    while(1)
    {
        int bt = menu();
        if (bt < 1 && bt > 3)
            continue;
        switch (bt)
        {
        case 1:
            bai3();
            break;
        }
    }
    
}