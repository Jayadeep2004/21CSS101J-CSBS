#include <stdio.h>
int main()
{
  printf("RA2211042010005\n");
  int meters, kilometers;

  printf("Enter distance in Kilometers=");
  scanf("%d", &kilometers);

  meters = kilometers * 1000;

  printf("%d Kilometers are equal to %d meters", kilometers, meters);

  return 0;
}
