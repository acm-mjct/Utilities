#include<iostream>
using namespace std;

int main()
{
    int n, f=0, f1=1, f2, i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<f<<""<<f1<<"";
    for (i=2; i<n; i++)
        {
            f2 = f + f1;
            cout<<f2<<"";
            f = f1;
            f1 = f2;
        }
        return 0;
}
