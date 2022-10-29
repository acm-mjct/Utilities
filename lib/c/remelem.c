#include<stdio.h>

int main()
{
    int arr[10];
    int pos,i,n;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter elements in array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Define position: \n");
    scanf("%d",&pos);
    for(i=pos;i< n-1;i++)
        arr[i] = arr[i+1];
    printf("Resultant array: ");
    for(i=0;i<n-1;i++)
        printf("%d\n",arr[i]);
}