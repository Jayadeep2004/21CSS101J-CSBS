#include <stdio.h>
int main()
{
   printf("RA2211042010005\n");
    float num1,num2, product;

   printf("Enter first number=");
    scanf("%f", &num1);

   printf("Enter second number=");
    scanf("%f", &num2);

   product = num1*num2;

   printf("product of entered numder is =%.3f",product);

    return 0;
}
