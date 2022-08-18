#include<stdio.h>
#include<math.h>
int cube(int);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    cube(num);
    printf("sum of cubes of %d numbers is %d",num,cube(num));
    printf("\n");
    return 0;
}
int cube(int n)
{
  int i,p,s=0;
  for(i=1;i<n+1;i++)
  { 
    p=pow(i,3);
    s=s+p;

  }
  return s;
}