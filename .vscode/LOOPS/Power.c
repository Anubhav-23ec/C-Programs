#include <stdio.h>
int main()
{
    int i, a, b, result = 1;
    printf("Enter base :");
    scanf("%d", &a);
    printf("Enter power :");
    scanf("%d", &b);

    for (i = 1; i <= b; i++)
    {
        result = result * a;
    }
    printf("%d raised to the power %d is %d", a, b, result);
    return 0;
}
