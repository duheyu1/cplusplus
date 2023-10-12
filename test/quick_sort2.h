#ifndef _QUICK_SORT2_H
#define _QUICK_SORT2_H

int partition(int[], int, int);

void quick_sort2(int arr[], int low, int high) {
    if (low >= high || arr == nullptr) {
        return;
    }

    int pivotpos = partition(arr, low, high);
    quick_sort2(arr, low, pivotpos - 1);
    quick_sort2(arr, pivotpos + 1, high);
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    while (low < high) {
        while (arr[high] >= pivot && low < high) --high;
        arr[low] = arr[high];
        while (arr[low] < pivot && low < high) ++low;
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    return low;
}

#endif