/*         1
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1             */
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int A = i - 1;
        for (int k = 1; k <= 4 - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int a = 1; a <= i - 1; a++)
        {
            printf("%d ", A);
            A--;
        }
        printf("\n");
    }
    return 0;
}