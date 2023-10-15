#ifndef _RADIX_SORT_H
#define _RADIX_SORT_H


#include <math.h>
#include <list>
using std::list;

void radix_sort(int arr[], int low, int high) {
    list<int> arr2[10];
    int div = 10;
    for (int i = 1; i <= 3; ++i) {
        for (int i = low; i <= high; ++i) {
            arr2[arr[i] % div / (div / 10)].push_back(arr[i]);
        }

        int index = 0;
        for (int i = 0; i != 10; ++i) {
            while (!arr2[i].empty()) {
                arr[index++] = arr2[i].front();
                arr2[i].pop_front();
            }
        }
        div *= 10;
    }
}

#endif