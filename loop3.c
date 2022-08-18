#include<stdio.h>
int main()
{
  int i,n,s=0;
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=2*n;i+=2)
  {
    s=s+i;

  }
  printf("sum of %d odd numbers is  %d",n,s);
  printf("\n");
  return 0;
}