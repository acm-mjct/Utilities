//Program to print fibonacci series upto given limit using for loop

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter the limit:\t");
    scanf("%d", &n);
    if (n <= 0){
        printf("Invalid input\n");
        exit(0);
    }
    if (n == 1){
        printf("\n0");
        exit(0);
    }
    if (n == 2){
        printf("\n0 1");
        exit(0);
    }
    int firstnum = 0;
    int secondnum = 1;
    printf("\n%d %d", firstnum, secondnum);
    for (i = 2;i < n;i++)
    {
       int thirdnum = firstnum + secondnum;
       printf(" %d ", thirdnum);
       firstnum = secondnum;
       secondnum = thirdnum; 
    }
    return 0;
}