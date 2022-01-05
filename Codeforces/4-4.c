#include <stdio.h>

int main()
{
    char a[30], d[30];
    int b, c, i, e;
    gets(a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%s", &d);
    e = b * c;
    printf("BK Bookseller\n\n");
    printf("Qty	ISBN	Title		Price	Total\n");
    printf("----------------------------------------------\n");
    printf("%d       %s     %s  %d     %d\n\n", c, d, a, b, e);
    printf("VAT 5%%\n");
    float f = e + e * 0.05;
    printf("You pay: %.2f", f);
    return 0;
}