#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
  srand ( time(NULL) );
  
  char arrayNum[5] = {'8', '6', '7', '0','3'};
  int RanIndex = rand() % 5;
  cout << arrayNum[RanIndex];
}