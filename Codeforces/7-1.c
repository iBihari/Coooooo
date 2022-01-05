#include <stdio.h>

int main()
{
    int i, j = 0, n, a, b, c;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = i / 100;
        if (a + c == b && i % 3 == 0)
        {
            printf("%10d", i);
            j++;
            if (j % 10 == 0)
                printf("\n");
        }
    }
    return 0;
}