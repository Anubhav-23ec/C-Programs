#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter no. :");
    scanf(" %d", &n);

    while (n > 0 || n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Total digits are %d", count);
    return 0;
}