
ADVERTISING



#include <iostream>
#include <array>
#include <iterator>
#include <cstring>

using std::cout; using std::endl;
using std::array; using std::remove;

int main() {
    int arr[10] = {1, 1, 1, 2, 2, 6, 7, 8, 9, 10};
    int elem_to_remove = 2;

    cout << "| ";
    for (const auto &item : arr) {
        cout << item << " | ";
    }
    cout << endl;

    auto tmp = std::to_array(arr);
    auto len = std::distance(tmp.begin(), (tmp.begin(), tmp.end(), elem_to_remove));
    auto new_arr = new int[len];
    std::memmove(new_arr, tmp.data(), len * sizeof(int));

    cout << "| ";
    for (int i = 0; i < len; ++i) {
        cout << new_arr[i] << " | ";
    }
    cout << endl;

    delete [] new_arr;

    return EXIT_SUCCESS;
}