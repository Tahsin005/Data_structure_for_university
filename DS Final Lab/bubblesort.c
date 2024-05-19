#include<stdio.h>

int main () {
    int arr[] = {5, 3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    //printf("%d", n);
    int num_of_pass = n - 1;

    for (int k = 1; k <= num_of_pass; k++) {
        int ptr = 0;
        while (ptr <= n - k - 1) {
            if (arr[ptr] > arr[ptr + 1]) {
                int temp = arr[ptr];
                arr[ptr] = arr[ptr + 1];
                arr[ptr + 1] = temp;
            }
            ptr++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
Start with the first element: Initialize a loop to iterate over the list.

Compare adjacent elements: Compare the current element with the next element.

Swap if necessary: If the current element is greater than the next element, swap them.

Move to the next pair: Move to the next pair of elements and repeat the comparison and swapping.

Repeat for all elements: Continue this process for all elements in the list, ensuring that each pass moves the next largest element to its correct position.

Reduce the range: After each complete pass through the list, reduce the range of elements to be compared by one, as the largest elements are already in their correct positions.

Check for sorted list: If no elements were swapped during a pass, the list is sorted, and you can stop the algorithm.
*/