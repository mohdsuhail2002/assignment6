#include<stdio.h>
#include<math.h>
int count(int);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    count(n);
    printf("number of digits in the given number is %d",count(n));
    printf("\n");
    return 0;
}
int count(int num)
{
    int x,c=0;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    return c;
}