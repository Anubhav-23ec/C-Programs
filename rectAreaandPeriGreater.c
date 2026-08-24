#include <stdio.h>
int main()
{

    int l, b, ar, peri;

    printf("Enter length and breadth of rectangle : ");
    scanf("%d %d", &l, &b);

    printf("Area of rectangle is %d\n", ar = l * b);
    printf("Perimeter of rectangle is %d\n", peri = 4 * (l + b));

    if (ar > peri)
    {
        printf("Area is greater than Perimeter");
    }
    else
    {
        printf("perimeter is greater than Area");
    }
    return 0;
}