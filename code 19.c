#include <stdio.h>
int main()
{
   float amount, discountRate, discount, finalPrice;
   printf("Enter purchase amount:");
   scanf ("%f", &amount);
   if (amount < 5000)
    discountRate = 5;
   else if (amount < 10000)
    discountRate = 10;
   else if (amount < 20000)
    discountRate = 15;
   else
    discountRate = 20;
   discount = amount * discountRate / 100;
   finalPrice = amount - discount ;
   printf("Discount = %.2f", discount);
   printf ("\nFinalprice = %.2f",finalPrice);
   return 0;
}
