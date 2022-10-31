#include <stdio.h>
#include <stdlib.h>
int Insert_Array();
int Delete_Array();
void Display_Array();
int arr[30], n;
int main()
{
    int choice;
    
    do
    {
        printf("\nEnter Choice: \n1.Insert Array Element\n2.Delete Array Element\n3.Display Array elements\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Number of Elements in the array: ");
            scanf("%d", &n);
            Insert_Array();
            break;
        case 2:
            Delete_Array();
            break;
        case 3:
            Display_Array();
            break;
        case 4:
            exit(0);
            break;
        }
    } while (choice != 4);
}

int Insert_Array()
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Element: ");
        scanf("%d", &arr[i]);
    }
}

int Delete_Array()
{
    int i, x;
    printf("\nEnter Element to delete: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }
}

void Display_Array()
{
    int i;
    printf("\n[%d,", arr[0]);
    for (i = 1; i < n-1; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("%d]\n",arr[i]);
}
