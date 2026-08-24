#include <stdio.h>
int main()
{
    int n, sum = 0, last_digit;
    printf("enter number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n=n/10;
    }
    printf("Sum of digits of number is %d", sum);
    return 0;
}

//DRY RUN
/* n=54
 last_digit = 4
 sum = 4
 n = 54 / 10 = 5
 last_digit = 5 % 10 = 5
 sum = 9 
 n = 5 / 10 = 0 */


