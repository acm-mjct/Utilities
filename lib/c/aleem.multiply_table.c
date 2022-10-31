//Program to print multiplication table
#include <stdio.h>

int main()
{
    int n, i, limit;
    printf("Enter the table:\t");
    scanf("%d", &n);
    printf("Enter the limit for table printing:\t");
    scanf("%d", &limit);
    for (i = 1;i <= limit;i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
}