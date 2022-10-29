// C++ program to print number pattern

#include <iostream>
using namespace std;

int main()
{
    int rows, columns, n = 5;
    for (rows = 1; rows <= n; rows++)
    {
        for (columns = 1; columns <= rows; columns++)
        {
            cout << rows << " ";
        }
        cout << "\n";
    }
    return 0;
}
