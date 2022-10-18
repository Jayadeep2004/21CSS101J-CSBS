#include<stdio.h>
int main() 
{
  printf("RA2211042010005\n");
  int p,t;
  float r,simple_interest;
  printf("Enter the principle amount : ");
  scanf("%d", &p);
  printf("Enter the rate of interest : ");
  scanf("%f", &r);
  printf("Enter the time period : ");
  scanf("%d", &t);
  simple_interest = (p * r * t)/100 ;
  printf("Simple interest = %f", simple_interest);
  return 0;
} 
