#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,limit;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("enter the range for multiplication\n");
  scanf("%d",&limit);
  for(i=1;i<=limit;i++)
  {
    printf("%d*%d=%d\n",n,i,n*i);
  }
}
