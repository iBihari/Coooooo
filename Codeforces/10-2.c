#include <stdio.h>
int a[10];

float tbam(int n)
{
    float tong=0,chia=0;
    for(int i=1;i<=n;i++)
    {
        if( a[i]<0 )
        {
            tong+=a[i];
            chia++;
        }
    }
    if(chia==0)
    return 0;
    return tong/chia;
}

float tbduong(int n)
{
    float tong = 0, chia = 0;
    for (int i = 1; i <=n; i++)
    {
        if (a[i] > 0)
        {
            tong += a[i];
            chia++;
        }
    }
    if (chia == 0)
        return 0;
    return tong / chia;
}

void sok(int n, int x)
{
    for(int i=1;i<=n;i++)
        if(a[i]==x)
        printf("%d ", i);
}

int main()
{
    int i, n, x;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(int i=1; i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n%f", tbam(n));
    printf("\n%f\n", tbduong(n));
    sok(n,x);
}