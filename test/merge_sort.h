#ifndef _MERGE_SORT_H
#define _MERGE_SORT_H

void merge_sort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

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
    return;
}

#endif