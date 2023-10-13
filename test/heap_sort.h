#ifndef _HEAP_SORT_H
#define _HEAP_SORT_H

#include <algorithm>

void heap_adjust(int arr[], int pos, int high) {
    int temp = arr[pos];
    while (pos < high) {
        int index = pos*2 + 1;
        if (index < high && arr[index] < arr[index + 1]) {
            ++index;
        }
        if (index <= high && arr[index] > temp) {
            std::swap(arr[index], arr[pos]);
        }
        pos = index;
    }
}

void heap_sort(int arr[], int low, int high) {
    for (int i = (high-1)/2; i >= 0; --i) {
        heap_adjust(arr, i, high);
    }
    for (int i = high; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        heap_adjust(arr, 0, i - 1);
    }
}

#endif