#include <stdio.h>
int main()
{
    int n, last_digit;
    printf("enter number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        last_digit = n % 10;
        printf("%d", last_digit);
        n = n / 10;
    }

    return 0;
}

//DRY RUN
/* n = 123
 last_digit = 3 
 3
 n = 12
last_digit = 2
32
n = 1
last_digit = 1
321
n = 0 */
