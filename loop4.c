#include<stdio.h>
#include<math.h>
int square(int);
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  square(n);
  printf("sum of squre of %d numbers is %d",n,square(n));
  printf("\n");
  return 0;
}
  int square(int num)
  {
  int p,s=0,i;
  for(i=1;i<num+1;i++)
  { 
    p=pow(i,2);
    s=s+p;

  }
  return s;
  }