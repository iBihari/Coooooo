#include <stdio.h>

char a[30], d[30],b[30],e[30];
int c, f;
int main()
{
    gets(a);
    gets(b);
    scanf("%d\n", &c);
    gets(d);
    gets(e);
    scanf("%d", &f);
    printf("Nhap thong tin sinh vien 1:\n");
    printf("- Ten: %s\n", a);
    printf("- Que quan: %s\n", b);
    printf("- Tuoi: %d\n", c);
    printf("Nhap thong tin sinh vien 2:\n");
    printf("- Ten: %s\n", d);
    printf("- Que quan: %s\n", e);
    printf("- Tuoi: %d\n", f);
    printf("Cac sinh vien da nhap vao:\n");
    printf("*-----------------------------------------------*\n");
    printf("| Ten | Que quan | Tuoi |\n");
    printf("*-----------------------------------------------*\n");
    printf("| %s | %s | %d |\n", a, b, c);
    printf("*-----------------------------------------------*\n");
    printf("| %s | %s | %d |\n", d, e, f);
    printf("*-----------------------------------------------*\n");
    return 0;
}
