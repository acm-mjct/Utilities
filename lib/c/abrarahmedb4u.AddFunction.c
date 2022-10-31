#include <stdio.h>
int add (int a , int b )
{
    int y= a+b;
    return y;
}
int main (){
int a , b ;
printf("enter the first and second number : \n");
scanf ("d", &a);
scanf("%d",&b);
printf ("%d",add (a,b));

}