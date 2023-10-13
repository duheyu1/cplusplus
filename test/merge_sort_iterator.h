#ifndef _MERGE_SORT_ITERATOR_H
#define _MEGER_SORT_ITERATOR_H

#include <algorithm>

void merge(int arr[], int low, int mid, int high) {
    int brr[high - low + 1];
    int i = low, j = mid + 1, brr_ptr = 0;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {brr[brr_ptr++] = arr[i++];}
        else {brr[brr_ptr++] = arr[j++];}
    }

    while (i <= mid) {
        brr[brr_ptr++] = arr[i++];
    }
    while (j <= high) {
        brr[brr_ptr++] = arr[j++];
    }
    for (i = low, brr_ptr = 0; i <= high;) {
        arr[i++] = brr[brr_ptr++];
    }
}

void merge_sort_iterator(int arr[], int low, int high) {
    int len = high - low + 1;
    // 第一种写法
    // for (int times = 1; times < len; times *= 2) {
    //     int ptr = low;
    //     while (ptr + times*2 - 1 <= len) {
    //         merge(arr, ptr, ptr + times - 1, ptr + times*2 - 1);
    //         ptr += times*2;
    //     }
    //     if (ptr + times <= len) {
    //         merge(arr, ptr, ptr + times - 1, high);
    //     }
    // }

    // 第二种写法
    for (int step = 1; step < len; step <<= 1) {
        for (int index = low; index < len; index += step*2) {
            merge(arr, index, std::min(index + step - 1, len), std::min(index + step*2 -  1, len));
        }
    }
}

#endif