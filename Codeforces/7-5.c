#include <stdio.h>

int main()
{
    int j = 0, a;
    scanf("%d", &a);
    char i;
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
        j++;
        if (j % 7 == 0)
        {
            printf("\n");
        }
    }
}
