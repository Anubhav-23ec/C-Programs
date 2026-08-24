#include <stdio.h>
int main()
{
    int n, i, a = 0;

    printf("Enter number : ");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("1 is neither Prime nor Composite");
    }
    else if (a == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}