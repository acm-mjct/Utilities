#include<stdio.h>
int main()
{
  int a,b,c;
  printf("This program finds sum of the greater two numbers:\n");
  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && c>b)
   {
     printf("Sum is: %d",a+c);
   }
  else if(b>a && c>a)
   {
    printf("Sum is :%d",b+c);
   }
  else
  printf("Sum is:%d",a+b);
}


