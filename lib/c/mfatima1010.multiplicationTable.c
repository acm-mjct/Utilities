// Program to find the multiplication table of a given number
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf(" Enter a number : ");
    scanf(" %d", &num);
    printf("\n Table of %d \n ", num);
    while (i <= 10)
    {
        printf(" %d x %d = %d \n", num, i, (num * i));
        i++;
    }
    return 0;
}