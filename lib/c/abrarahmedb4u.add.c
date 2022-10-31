#include <stdio.h>
int add(int a , int b ){
    int y = a+b;
    return y;
}
int main (){
    int a, b;
    printf ("enter the value of a and b ");
    scanf ("%d ", &a);
    scanf ("%d",&b);
    printf("%d",add(a,b));
}

