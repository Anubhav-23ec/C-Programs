#include <stdio.h>
int main()
{
    int x1, x2, y1, y2, x3, y3;

    printf("Enter the points : ");
    scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &x3, &y3);

    int slope1 = (y2 - y1) / (x2 - x1);
    int slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        printf("Points are in Straight Line");
    }
    else
    {
        printf("Points are not in Straight Line");
    }
    return 0;
}