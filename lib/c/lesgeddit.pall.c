#include<stdio.h>
#include<string.h>
int main(){
  char string[20];
  int i,flag=0,len;
  printf("Program to check if a string is a pallindrome or not:\n");
  printf("Enter string:");
  scanf("%s",string);
  len=strlen(string);
  for(i=0;i<len;i++)
  { 
    if(string[i]!=string[len-i-1])
    { 
      flag=1;
      break;
    }
    
  }
  if(flag)
  {
    printf("Given string is not a pallindrome!\n");
  }
  else
  {
    printf("Given string is a pallindrome!");
  }
  return 0;
}