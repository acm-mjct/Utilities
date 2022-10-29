#include<stdio.h>
int sum(int,int);
main()
{
    int a,b,c;
    printf("Enter the numbers for addition:\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The sum of %d+%d=%d",a,b,c);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}