#include<stdio.h>

int sum(int,int);

int main()
{
    int a,b,c;
    printf("enter two numbers to be added:/n");
    scanf("%d %d",&a,&b);

    c = sum(a,b);
    printf("the sum of the two numbers= %d",c);

    return 0;
}

int sum(int n,int m)
{
    return n+m;
}