#include<stdio.h>
int main () {
    int arr[] = {5, 4, 3, 2, 1};

    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++) {
        int minimum_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minimum_idx]) {
                minimum_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimum_idx];
        arr[minimum_idx] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    return 0;
}
/*
Start with the first element: Initialize a loop to iterate over the list.
Find the minimum element: For the current position, find the smallest element in the unsorted portion of the list.
Swap if necessary: Swap this minimum element with the element at the current position.
Move to the next position: Move to the next position in the list and repeat the process until the entire list is sorted.

*/