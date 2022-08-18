#include<stdio.h>
#include<math.h>
int fac(int);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    fac(n);
    printf("factoril of number %d is %d",n,fac(n));
    printf("\n");
    return 0;
}
int fac(int num)
{
    int f;
    if(num==1)
        return 1;
    f=num*fac(num-1);
    return f;
}