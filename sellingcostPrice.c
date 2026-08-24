#include <stdio.h>
int main()
{
   float cp, sp, profit, loss;

   printf("Enter cost price :");
   scanf("%f", &cp);

   printf("Enter selling price :");
   scanf("%f", &sp);

   if (sp > cp)
   {
      profit = sp - cp;
      printf("Shopkeeper is in profit of %.2f /-", profit);
   }
   else if (sp < cp)
   {
      loss = cp - sp;
      printf("Shopkeeper is in loss of %.2f /-", loss);
   }
   else
   {
      printf("No Profit No Loss");
   }
   return 0;
}
