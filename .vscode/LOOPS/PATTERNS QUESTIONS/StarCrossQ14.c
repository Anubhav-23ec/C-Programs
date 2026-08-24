/*   *       *
       *   *
         *
       *   *
     *       *
 */

#include <stdio.h>
int main()
{
    int i, j;
    for(int n =1;n<=3;n++)
    {
        for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == i || i + j == 6)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    if(n<3){printf("  ");}
    }
    
    return 0;
}