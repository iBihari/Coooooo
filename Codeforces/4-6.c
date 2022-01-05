#include <stdio.h>
int main()
{

    char a[1000], b[1000], c[1000];
    char d[1000], a1[1000], a2[1000];

    gets(a); 
    gets(b);
    gets(c);
    gets(d);
    gets(a1);
    gets(a2);

    printf("STT	Ngay Thang	Ten lop	Ten mon hoc	Bat dau	Ket thuc\n");
    printf("%s %s %s %s %s %s", a, b, c, d, a1, a2);
}