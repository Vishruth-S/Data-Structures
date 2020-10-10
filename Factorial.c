//Program to find factorial of a number without using recursion

#include<stdio.h>
int main()
{
  int n,fac=1,i;
  printf("Enter the no");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      fac*=i;
  }
  printf("The factorial of %d is %d",n,fac);
  return 0;
}