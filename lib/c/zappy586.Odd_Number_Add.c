#include<stdio.h>
#include<stdlib.h>
int main()
{
    int upper,lower,i,sum=0;
    printf("Enter upper limit : ");
    scanf("%d",&upper);
    printf("Enter lower limit : ");
    scanf("%d",&lower);
    for(i=lower; i<=upper;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("The sum of odd numbers between these numbers is: %d",sum);
}