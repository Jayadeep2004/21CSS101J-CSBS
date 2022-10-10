#include <stdio.h>
int main()
{
  
  int meters, centimeters;

  printf("Enter distance in Meters=");
  scanf("%d", &meters);

  centimeters = meters * 100;

  printf("%d cenimeters are equal to %d meters", centimeters, meters);

  return 0;
}
