#include <stdio.h>
main()
{
    int start, end, sum=0, i;
    printf("Enter 1st number in range: ");
    scanf("%d", &start);
    printf("Enter last number in range: ");
    scanf("%d", &end);
    if(start%2==0)
    {
        start+=1;
    }
    if(end%2==0)
    {
        end-=1;
    }
    for(i=start;i<=end;i+=2)
    {
        printf("%d + ", i);
        sum+=i;
    }
    printf("= %d\n", sum);
}