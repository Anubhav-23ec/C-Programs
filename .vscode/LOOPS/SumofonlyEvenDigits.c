#include <stdio.h>
int main()
{
    int n, sum = 0, last_digit;
    printf("enter number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        last_digit = n % 10;
        if (last_digit % 2 == 0)
        {
            sum = sum + last_digit;
        }
        n = n / 10;
    }
    printf("Sum of Even Digits are %d", sum);
    return 0;
}

//DRY RUN
/* n=3475
last_digit = 5
sum = 0
n=347
last_digit = 7
sum = 0
n = 34
last_digit = 4
sum = 4
n=3
last_digit = 3
sum = 4
n=0*/