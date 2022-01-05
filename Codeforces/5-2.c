#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int Kq1 = a++ + ++a;
    int Kq2 = --a - b-- * ++c;
    printf("%d\n", Kq1);
    printf("%d", Kq2);
    return 0;
}