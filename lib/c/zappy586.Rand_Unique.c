#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int arr[200],n,i;
    system("clear");
    printf("Enter No. of elements for the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
        printf("\n");
    }
    int num=rand()%(n);
    printf("The random Array element is: %d",arr[num]);
}
