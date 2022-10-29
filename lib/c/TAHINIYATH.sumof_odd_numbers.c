/*sum of odd numbers between two numbers 
input 1 to 10 1+3+5+7+9
output = 25*/
#include<stdio.h>
#include<math.h>
int main()
{
    int odd,str,end,i,sum=0;
    printf("enther the range(start,end) for sum of odd numbers between the range\n");
    scanf("%d %d",&str,&end);
    int begin=str;
    for(i=str;i<=end;i++)
    
    {
        if(str%2!=0)
        {sum=str+sum;
    }
    str++;}
    printf("the sum of odd numbers between %d and %d = %d\n",begin,end,sum);
}
