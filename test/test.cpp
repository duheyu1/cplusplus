#include <iostream>
#include <string>
#include <cstdlib>
#include "quick_sort2.h"
using namespace std;

int main() {
    for (int i = 0; i != 10; ++i) {
        int arr[20];
        for (int j = 0; j != 20; ++j) {
            arr[j] = rand() % 90 + 10;
        }
        quick_sort2(arr, 0, 19);
        for (int j = 0; j != 20; ++j) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}