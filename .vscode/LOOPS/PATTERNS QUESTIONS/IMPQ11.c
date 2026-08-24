/*   1
     A B
     1 2 3
     A B C D
     1 2 3 4 5   */
#include <stdio.h>
int main()
{
    int i, j, n;
    
    printf("enter number of rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = 0; j < i; j++)
            {
                printf("%c ", 'A' + j);
            }
        }
        printf("\n");
    }
    return 0;
}