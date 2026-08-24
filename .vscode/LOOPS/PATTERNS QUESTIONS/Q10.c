/*   A
     A B
     A B C
     A B C D   */
#include <stdio.h>
int main()
{
    
    for (char i = 'A'; i <= 'D'; i++)
    {
        
        for (char j = 'A'; j <= i; j++)
        {
            
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}