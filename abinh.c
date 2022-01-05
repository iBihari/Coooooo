
#include <stdio.h>
#include <math.h>
    int
    name()
{
    int a, sum;
    char c;
    sum = 0;
    printf("\n Nhap tung ki tu ten cua ban:");
    while (c != 'k')
    {
        printf("\n nhap vao ki tu dau tien:");
        c = getchar();
    }
    a = (int)c;
    printf("\n %d", a);
    sum += a;
    while (c != 'h')
    {
        printf("\n nhap vao ki tu thu 2:");
        c = getchar();
    }
    a = (int)c;
    printf("\n %d", a);
    sum += a;
    while (c != 'o')
    {
        printf("\n nhap vao ki tu thu 3:");
        c = getchar();
    }
    a = (int)c;
    printf("\n %d", a);
    sum += a;
    return sum;
}
//-------------------------
int nguyento(int s)
{
    int i, j, flag, sum, n;
    sum = 1;
    if (s > 2)
    {
        n = 2;
        printf("\n %d", s);
        sum += n;
    }
    for (i = 3; i <= s; i++)
    {
        flag = 0;
        for (j = 2; j <= (i - 1); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            n = i;
            sum += n;
            printf("\n %d", n);
        }
    }
    return sum;
}
//-------------------
int ham(int s, int y)
{
    int i, n;
    for (i = 1; i < (s + y); i++)
    {
        n = i * i * i;
        if (n >= (s + y))
            break;
    }
    return n;
}
int main()
{
    int n = 0, s, a, b;
    char c = ' ';
    printf("\n Ho va ten: Tran Van Kho");
    printf("\n Ngay 27/12/2021");
    printf("\n 20030999");
    printf("\n Lop 04-CNTT-K15");
    printf("\n Chuong trinh tinh");
    printf("\n 1- Chuong 1");
    printf("\n 2- Chuong 2");
    printf("\n 9- Chuong 3");
    printf("\n An mot phim khac: Thoat");
    printf("\n Hay chon chuong trinh tinh:");
    while (c != 'n')
    {
        c = getchar();
        if (c == '1')
        {
            printf("\n Ban da chon chuong trinh so 1:");
            s = name();
            printf("\n Tong so nguyen cua ten: %d", s);
            printf("\n Ban co muon tiep tuc chuong trinh khong (y/n)?");
        }
        if (c == '2')
        {
            printf("\n Ban da chon chuong trinh 2:");
            a = name();
            s = nguyento(a);
            printf("\n Tong= %d", s);
            printf("\n Ban co muon tiep tuc chuong trinh khong (y/n)?");
        }
        if (c == '9')
        {
            printf("\n Ban da chon chuong trinh 3:");
            a = name();
            s = nguyento(a);
            b = ham(a, s);
            printf("\n b=%d", b);
            printf("\n Ban co muon tiep tuc chuong trinh khong (y/n)?");
        }
    }
    return 0;
}
