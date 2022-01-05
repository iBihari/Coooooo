#include <stdio.h>
int main()
{

    char a[1000], b[1000];
    char c[1000], d[1000];
    gets(a);
    gets(b);
    gets(c);
    gets(d);

    printf("Ho Ten: %s\n", a);
    printf("Ngay sinh: %s\n", b);
    printf("MSSV: %s\n", c);
    printf("Lop: %s", d);
}
