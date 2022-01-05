#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100],x, kt;
    scanf("%d", &kt);
    int *p = &a[0];
    for(int i=1;i<=kt;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[kt];
    for(int i=kt;i>0;i--)
    {
        printf("%p", *p);
    }
    return 0;
}