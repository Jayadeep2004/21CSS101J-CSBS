#include <stdio.h>
int main() 
{
    printf("RA2211042010005\n");
 int n, i, factorial = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

   for (i = 1; i <= n; ++i) 
     factorial *= i;

      printf("Factorial = %d", factorial);
      return 0;
}
