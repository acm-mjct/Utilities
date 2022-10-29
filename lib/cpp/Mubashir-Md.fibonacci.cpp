#include <iostream>
using namespace std;

int main(){
    int f1,f2,f3;
		// Mubashir-Md
		int lim;
		cout<<"Enter the number of terms ";
        cin>>lim;
		f1=0;
		f2=1;
		cout<<"Fibonacci series ";
		cout<<f1<<" "<<f2;
		for(int i=0;i<lim-2;i++){
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
			cout<<" "<<f3;
		}
        return 0;
}