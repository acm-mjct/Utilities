#include<iostream>
using namespace std;
int main()
{
    int arr[10], n=10, i, j, ele, found=0;
    cout<<"Enter Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Deleted: ";
    cin>>ele;
    for(i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement is not found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}
