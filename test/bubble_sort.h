#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H

#include <algorithm>

void bubble_sort(int arr[], int low, int high) {
    for (int i = 0; i != high - low; ++i) {
        for (int j = low; j < high; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif