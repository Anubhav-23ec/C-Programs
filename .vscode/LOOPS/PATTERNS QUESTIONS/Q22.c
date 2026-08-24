/*           1
           1 2 3
         1 2 3 4 5
       1 2 3 4 5 6 7
     1 2 3 4 5 6 7 8 9         */
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < 6 - i; k++){
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("%d ", j);
            }
        printf("\n");
    }
    return 0;
}