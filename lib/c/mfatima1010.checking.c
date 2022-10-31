// Program that counts how many A's are in a sentence
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char array[100];
    printf("Enter a sentence : \n");
    gets(array);
    for (i = 0; i < strlen(array); i++)
    {
        if (array[i] == 'a' || array[i] == 'A')
            count++;
    }
    printf("the number of A's in a sentence is : %d\n", count);
}