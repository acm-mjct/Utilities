//multiplication table 
#include<stdio.h>
int main()
{
    int num,n,i,re=0;
    printf("enter the number for which multiplication table to be generated\n");
    scanf("%d",&num);
    printf("enter the max limit of the table\n");
    scanf("%d",&n);
    printf("MULTIPLICATION TABLE:\n");
    for(i=0;i<=n;i++)
    {
re=i*num;
printf(" %d * %d =%d\n",num,i,re);
    }
}
