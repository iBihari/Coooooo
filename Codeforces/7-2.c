#include <stdio.h>

int main()
{
    float a;
    char b[30];
    int i, tiengui, tienlai, sodu, tong = 0;
    scanf("%f", &a);
    getchar();
    gets(b);
    scanf("%d", &tiengui);
    printf("Tai khoan khach hang: %s\n", b);
    printf("Thang    Tien dau ky    Tien lai    So du\n");
    for (i = 1; i <= 6; i++)
    {
        tienlai = tiengui * a * 1 / 100;
        sodu = tienlai + tiengui;
        printf("%5d%15d%12d    %-d\n", i, tiengui, tienlai, sodu);
        tiengui = sodu;
        tong += tienlai;
    }
    printf("Tong lai: %d", tong);
    return 0;
}