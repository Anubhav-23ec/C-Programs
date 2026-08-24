/*        *
        * * *
      * * * * *
    * * * * * * *
      * * * * *
        * * *
          *              */
#include <stdio.h>
int main()
{
  for (int I = 1; I <= 3; I++)
  {
    for (int K = 1; K <= 4 - I; K++)
    {
      printf("  ");
    }
    for (int J = 1; J <= 2 * I - 1; J++)
    {
      printf("* ");
    }
    printf("\n");
  }
  for (int i = 1; i <= 4; i++)
  {
    for (int k = 1; k < i; k++)
    {
      printf("  ");
    }
    for (int j = 7; j >= 2 * i - 1; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}