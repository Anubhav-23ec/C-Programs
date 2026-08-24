#include <stdio.h>
int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int n, r;
    printf("enter n = ");
    scanf("%d", &n);
    printf("enter r = ");
    scanf("%d", &r);
    int npr = factorial(n) / factorial(n - r);
    printf("Permutation of %d and %d is %d", n, r, npr);

    return 0;
}