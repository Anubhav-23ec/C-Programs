#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Nth Term : ");
    scanf("%d", &n);

    for (i = 4; i <= n; i = i + 3)
    {
        printf("%d ", i);
    }

    return 0;
}