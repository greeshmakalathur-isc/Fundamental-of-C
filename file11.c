#include<stdio.h>
int main()
{
  float principle,rate,time,simpleinterest;
  printf("enter principle amount");
  scanf("%f",&principle);
  printf("enter rate amount");
  scanf("%f",&rate);
  printf("enter time :");
  scanf("%f",&time);
  simpleinterest=(principle*rate*time)/100;  
  printf("Simple interest is :%f",simpleinterest);

  return 0;
}