#include<stdio.h>
int main()
{
    int a[100], n=5;
    int *p=&a[0];
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    p= &a[n];
    for(int i=n;i>0;i--);
        printf("%d",*p);
        p--;



}