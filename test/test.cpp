#include <iostream>
#include <string>
#include <cstdlib>
#include "merge_sort_iterator.h"
using namespace std;

int main() {
    for (int i = 0; i != 10; ++i) {
        int arr[20];
        for (int j = 0; j != 20; ++j) {
            arr[j] = rand() % 90 + 10;
        }
        merge_sort_iterator(arr, 0, 19);
        for (int j = 0; j != 20; ++j) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}