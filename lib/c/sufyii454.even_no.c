#include<stdio.h>
int main() 
{
	int number;
	printf("Enter any integer: ");
	scanf("%d",&number);
	if(number % 2 ==0)
	         printf("%d is an even number.",number);
    else
	         printf("%d is not an even number.",number);
	return 0;
}