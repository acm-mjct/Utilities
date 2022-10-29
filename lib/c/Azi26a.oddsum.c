#include<stdio.h>
main()
{
    int s,e,sum=0,i;
    printf("Enter the starting number:");
    scanf("%d",&s);
    printf("Enter the ending number:");
    scanf("%d",&e);
    if(s%2==0)
    {
        s=s+1;
    }
    if(e%2==0)
    {
        e=e-1;
    }
    for(i=s;i<=e;i+=2)
    {
        sum=sum+i;
    }
        printf("The sum of odd numbers is %d",sum);

}