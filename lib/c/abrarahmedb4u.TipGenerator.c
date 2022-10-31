#include <stdio.h>
int main (){
    int n,i,arr[10], tip [10];
    printf ("enter the number of bills\n");
    scanf ("%d", &n);
    printf("enter the value of bill \n");
    for (i =0; i<n ;i++)
    {
        scanf ("%d", &arr[i]);
    }

printf("the tips are \n");
    for (i=0;i<n;i++)
    {
        
        if (arr[i]>=0 && arr[i]<=300 )
        {
            tip[i]=arr[i]*(0.15);
        }else if (arr[i]>300)
        {
            tip[i] = arr[i]* (0.2);
        }
        printf ("%d\n",tip[i]);
        
    }
    }