#ifndef _BINARY_INSERT_SORT_H
#define _BINARY_INSERT_SORT_H

void binary_insert_sort(int arr[], int low, int high) {
    for (int i = low + 1; i <= high; ++i) {
        int left = low, right = i - 1, temp = arr[i], pos;
        while (left <= right) {
            if (left == right) {
                if (temp >= arr[left]) {
                    pos = left + 1;
                    break;
                } else {
                    pos = left;
                    break;
                }
            }
            if (left - right == 1) {
                pos = right;
                break;
            }

            int mid = (left + right) / 2;
            if (arr[mid] <= temp) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        for (int j = i; j > pos; --j) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = temp;
    }
}

#endif