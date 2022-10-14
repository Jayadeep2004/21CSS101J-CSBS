#include <stdio.h>
int main() 
{
  printf("RA2211042010005\n");
  int number;
  printf("Enter a number:");
  scanf("%d",&number);
  
  if (number%2==0)
  printf("The number %d is EVEN",number);
  else
  printf("The number %d is ODD",number);
}
