#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quick_sort(int *arr, int low, int high) {
    if (low >= high || arr == nullptr) {
        return;
    }
    int left = low - 1;
    for (int move = low; move != high; ++move) {
        if (arr[move] < arr[high]) {
            ++left;
            if (left != move) {
                swap(arr[move], arr[left]);
            }
        }
    }
    ++left;
    swap(arr[high], arr[left]);

    quick_sort(arr, low, left - 1);
    quick_sort(arr, left + 1, high);
    
}

#endif