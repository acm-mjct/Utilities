/*************PROGRAM TO FIND NUMBER OF A'S IN A SENTENCE
              INPUT: TAHINIYATH SHEREEN
              OUTPUT: A'S = 2******************************/
              
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,count=0;
    char arr[100];
    printf("enter a sentence\n");
    gets(arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='a'||arr[i]=='A')
        count++;
    }
    printf("the number of A's in a sentence is %d\n",count);
}
