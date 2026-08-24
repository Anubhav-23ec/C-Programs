/*   * * * *
     * * *
     * *
     *     */

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//DRY RUN

/* i        j                  print 
   1    1/2/3/4/5(stop)       * * * * 
   2    1/2/3/4(stop)         * * * 
   3    1/2/3(stop)           * * 
   4    1/2(stop)             * 
*/