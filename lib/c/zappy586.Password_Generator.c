#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int n,i;
    char ch;
    printf("Enter the size of password: ");
    scanf("%d",&n);
    printf("\nThe  Password is: ");
    for(i=0;i<n;i++)
    {
      ch=(rand()%(92))+33; 
      printf("%c",ch);            
    }
}