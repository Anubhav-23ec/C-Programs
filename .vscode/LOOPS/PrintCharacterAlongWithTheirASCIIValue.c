#include <stdio.h>
int main()
{
    for (char i = 'A' ; i <= 'z'; i++)
    {
        printf("%c ",i);
        i = (int)i;
        printf("%d\n",i);
    }
    return 0;
}