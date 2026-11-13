#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4-i; j++)
            printf(" ");

        for(j = 4; j >= 5-i; j--)
            printf("%d", j);

        for(j = 6-i; j <= 4; j++)
            printf("%d", j);

        printf("\n");
    }
    for(i = 3; i >= 1; i--)
    {
        for(j = 1; j <= 4-i; j++)
            printf(" ");

        for(j = 4; j >= 5-i; j--)
            printf("%d", j);

        for(j = 6-i; j <= 4; j++)
            printf("%d", j);

        printf("\n");
    }
    return 0;
}
