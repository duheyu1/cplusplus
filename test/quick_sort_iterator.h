#ifndef _QUICK_SORT_ITERATOR_H
#define _QUICK_SORT_ITERATOR_H

#include <stack>
using namespace std;

void quick_sort_iterator(int arr[], int low, int high) {
    if (low >= high || arr == nullptr) {
        return;
    }
    stack<int> stk;
    stk.push(low);
    stk.push(high);
    while (!stk.empty()) {
        int high = stk.top();
        stk.pop();
        int low = stk.top();
        stk.pop();

        int left = low, right = high;
        int pivot = arr[left];
        while (left < right) {
            while (arr[right] >= pivot && left < right) --right;
            arr[left] = arr[right];
            while (arr[left] < pivot && left < right) ++left;
            arr[right] = arr[left];
        }
        arr[left] = pivot;
        if (low < left - 1) {
            stk.push(low);
            stk.push(left - 1);
        }
        if (left + 1 < high) {
            stk.push(left + 1);
            stk.push(high);
        }
    }
    
}

#endif