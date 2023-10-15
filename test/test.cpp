#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include "bucket_sort.h"

int main() {
    for (int i = 0; i != 10; ++i) {
        int arr[20];
        for (int j = 0; j != 20; ++j) {
            arr[j] = rand() % 80 + 10;
        }
        bucket_sort(arr, 0, 19);
        for (int j = 0; j != 20; ++j) {
//             cout << arr[j] << " ";
            printf("%3d", arr[j]);
        }
        printf("\n");
    }
}