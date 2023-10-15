#ifndef _BUCKET_SORT_H
#define _BUCKET_SORT_H

#include <list>
#include <algorithm>
#include <limits.h>
using std::list;

void bucket_sort(int arr[], int low, int high) {
    // assume that the range of number is between 0 and 20
    int min_val = INT_MAX; int max_val = INT_MIN;
    for (int i = low; i <= high; ++i) {
        min_val = std::min(min_val, arr[i]);
        max_val = std::max(max_val, arr[i]);
    }
    int size = (max_val-min_val) / (high-low) + 1;
    int bucket_num = (high-low) + 1;
    list<int> buckets[bucket_num];
    for (int i = low; i <= high; ++i) {
        buckets[(arr[i]-min_val) / size].push_back(arr[i]);
    }

    int index = low;
    for (int i = 0; i != bucket_num; ++i) {
        buckets[i].sort();
        while (!buckets[i].empty()) {
            arr[index++] = buckets[i].front();
            buckets[i].pop_front();
        }
    }
}

#endif