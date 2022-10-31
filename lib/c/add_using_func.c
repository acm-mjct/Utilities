#include <stdio.h>
int add(int, int); //func prototype
int main()
{
    int a, b;
    printf("Enter the two numbers to be added: ");
    scanf("%d%d", &a, &b);
    //func call
    printf("%d + %d = %d\n", a, b, add(a,b));
    return 0;
}
//func definition
int add(int x, int y)
{
    return x+y;
}
