#ifndef _INSERT_SORT_H
#define _INSERT_SORT_H

int nums;

void insert_sort(int arr[], int low, int high) {
    for (int i = low + 1; i <= high; ++i) {
        int j = i - 1;
        while (j >= low) {
            if (arr[i] >= arr[j]) break;
            --j;
        }
        int temp = arr[i];
        for (int m = i; m > j + 1; --m) {
            arr[m] = arr[m - 1];
        }
        arr[j + 1] = temp;
    }
}

#endif