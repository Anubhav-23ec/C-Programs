/*   A B C D
     A B C D
     A B C D
     A B C D   */
#include <stdio.h>
int main()
{
    for (char i = 'A'; i <= 'D'; i++)
    {
        for (char i = 'A'; i <= 'D'; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}