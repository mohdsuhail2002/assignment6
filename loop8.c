#include<stdio.h>
int main()
{
    int i,n,c;
    printf("enter a number to check");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           c++;
    }
    if(c==2)
       printf("the given number %d is prime number",n);
    else
       printf("the given number %d is not a prime number",n);
    printf("\n");
    return 0;
}
    