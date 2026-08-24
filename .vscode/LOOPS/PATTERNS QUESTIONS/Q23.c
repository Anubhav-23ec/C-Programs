/*         A
         A B C
       A B C D E
     A B C D E F G            */
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int k = 1; k <= 4 - i; k++)
    {
      printf("  ");
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      printf("%c ", 64 + j);
    }
    printf("\n");
  }

  return 0;
}