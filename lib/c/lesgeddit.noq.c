#include<stdio.h>
#include<string.h>
int main()
{
 printf("This is a program to know number of q's in your string!\n");
 char string1[30];
 int count=0,len,i;
 printf("Enter your string:");
 scanf("%s",string1);
 len=strlen(string1);
 for(i=0;i<len;i++)
 {
  if(string1[i]=='q')
  {
      count++;
  }
 }
 printf("The number of q's in your string are: %d",count);

}

