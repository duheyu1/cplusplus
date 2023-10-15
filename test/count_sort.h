#ifndef _COUNT_SORT_H
#define _COUNT_SORT_H

void count_sort(int arr[], int low, int high) {
    // assume that the value of k is between 0 and 9;
    int arr_k[10];
    for (int i = 0; i != 10; ++i) {
        arr_k[i] = 0;
    }

    for (int i = 0; i <= 19; ++i) {
        ++arr_k[arr[i]];
    }
    for (int i = 1; i != 10; ++i) {
        arr_k[i] += arr_k[i - 1];
    }

    int arr2[high - low + 1];
    for (int i = 0; i <= 19; ++i) {
        arr2[arr_k[arr[i]] - 1] = arr[i];
        --arr_k[arr[i]];
    }
    for (int i = 0; i <= 19; ++i) {
        arr[i] = arr2[i];
    }
}

#endif