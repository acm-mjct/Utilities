#include <stdio.h>
#include <stdlib.h>

int main()
{
    int strtno, endno, sum =0; //strtno = starting number , endno = ending number
    printf("Enter starting number:\t");
    scanf("%d", &strtno);
    printf("Enter ending number:\t");
    scanf("%d", &endno);
    if (strtno >= endno)
    {
        printf("Enter the values correctly!!!");
        exit(1);
    }
    //Using for loop for checking the no of odd nos
    for (int i = strtno;i <= endno;i++)
    {
        if (i % 2 != 0)
        sum = sum + i;
    }
    printf("The sum of odd numbers between %d and %d is %d", strtno, endno, sum);
    printf("\n Thank You!!");
    return 0;
}