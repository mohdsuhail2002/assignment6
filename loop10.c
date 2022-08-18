#include<stdio.h>
int main()
{
    int x,reverse=0,remainder;
    printf("enter a integer");
    scanf("%d",&x);
    while(x!=0)
    {
        remainder=x%10;
        reverse=reverse*10+remainder;
        x/=10;
    }
    printf("the reversed number is %d",reverse);
    printf("\n");
    return 0;
}
