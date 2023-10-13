#ifndef _SHELL_SORT_H
#define _SHELL_SORT_H

#include <algorithm>

int nums = 0;

void shell_sort(int arr[], int low, int high) {
    for (int step_len = (high-low+1)/2; step_len > 0; step_len >>= 1) {
        for (int i = 0; i < step_len; ++i) {
            for (int j = low + i; j <= high; j += step_len) {
                int temp = j;
                for (int m = j - step_len; m >= low + i; m -= step_len) {
                    if (arr[j] < arr[m]) {
                        std::swap(arr[j], arr[m]);
                        j = m;
                    } else break;
                }
                j = temp;
            }
        }
    }
}

#endif