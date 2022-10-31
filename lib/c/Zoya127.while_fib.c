#include<stdio.h>
 
int main()
{
    int f1=0,f2=1,f3,i=3,n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("%d\t%d",f1,f2); // It prints the starting two values
    while(i<=n)           
    {
        f3=f1+f2;               // performs add operation on previous two  values
        printf("\t%d",f3);      
        f1=f2;
        f2=f3;
        i=i+1;                  
    }
    return 0;
}
