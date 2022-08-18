#include<stdio.h>
int main()
{
    int x,y,lcm,max;
    printf("enter two numbers for lcm");
    scanf("%d %d",&x,&y);
    max=(x>y)?x:y;
    while(1)
    {
        if(max%x==0 && max%y==0)
        {
            printf("the lcm of %d and %d is %d",x,y,max);
            break;
        }
        max++;
    }
    printf("\n");
    return 0;
    
}