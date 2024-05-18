#include<stdio.h>
int main () {
    int arr[] = {5, 4, 3, 2 , 1};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
    Start with the second element: The first element is considered already sorted.
    Compare with sorted elements: Take the current element and compare it with the elements in the sorted portion of the list.
    Shift elements if necessary: Shift all elements in the sorted portion that are greater than the current element to the right.
    Insert the current element: Insert the current element into its correct position.
    Move to the next element: Repeat the process for the next element until the entire list is sorted.
*/