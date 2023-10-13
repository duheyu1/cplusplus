#ifndef _SELECT_SORT_H
#define _SELECT_SORT_H

#include <climits>
#include <algorithm>

void select_sort(int arr[], int low, int high) {
    int min_num = INT_MAX, min_pos = low;
    for (int i = low; i < high; ++i) {
        for (int j = i; j <= high; ++j) {
            if (arr[j] < min_num) {
                min_num = arr[j];
                min_pos = j;
            }
        }
        std::swap(arr[i], arr[min_pos]);
        min_num = INT_MAX;
    }
}

#endif