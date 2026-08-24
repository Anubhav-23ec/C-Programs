#include <stdio.h>
int main()
{
    int s1, s2, s3;

    printf("enter three sides of a triangle :");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        printf("They can be a side of a triangle");
    }
    else
    {
        printf("No");
    }

    return 0;
}