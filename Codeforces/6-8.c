
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a < 5)
    {
        printf("Kem");
    }
    else if (a >= 5 && a < 7)
    {
        printf("Trung binh");
    }
    else if (a >= 7 && a < 8)
    {
        printf("Kha");
    }
    else if (a >= 8 && a < 9)
    {
        printf("Gioi");
    }
    else if (a >= 9 && a <= 10)
    {
        printf("Xuat sac");
    }
    else
    {
        printf("Nhap khong hop le");
    }
    return 0;
}