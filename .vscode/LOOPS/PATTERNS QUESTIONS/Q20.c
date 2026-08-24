/*         A
         A B
       A B C
     A B C D    */
#include <stdio.h>
int main()
{
    for (int i = 65; i <= 68; i++)
    {
        for (int k = 1; k <= 68 - i; k++)
        {
            printf("  ");
        }
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}