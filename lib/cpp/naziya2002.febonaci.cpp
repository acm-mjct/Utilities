#include <iostream>  
using namespace std;  
int main() {  
  int a=0,b=1,temp,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<a<<" "<<b<<" "; //printing 0 and 1    
 for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  temp=a+b;    
  cout<<temp<<" ";    
  a=b;    
  b=temp;    
 }    
   return 0;  
   } 