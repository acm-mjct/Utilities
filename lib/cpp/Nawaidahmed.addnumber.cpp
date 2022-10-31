#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<c<<endl;

}