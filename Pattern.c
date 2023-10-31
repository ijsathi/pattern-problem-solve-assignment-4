#include <stdio.h>
int main()
{
    int n, spch, str = 1;
    scanf("%d", &n);
    spch = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= spch; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= str; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int j = 1; j <= str; j++)
            {
                printf("#");
            }
        }
        if (i <= n - 1)
        {
            spch--;
            str += 2;
        }
        else
        {
            spch++;
            str -= 2;
        }
        printf("\n");
    }
    return 0;
}