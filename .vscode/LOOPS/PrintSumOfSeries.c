#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter number:");
    scanf("%d", &n);
    // With the help of LOOPS
    for (i = 1; i <= n; i++)
    { // To Print sum of 1 - 2 + 3 - 4 +.......n terms
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }
    // Without Using LOOPS
    /* for Even no. of terms --> n/2 and for Odd --> n/2 - n
    if(n%2!=0){
        sum = n/2-n;
    }
    else{
        sum = n / 2;
    } */

    printf("Sum of the given series is %d", sum);
    return 0;
}