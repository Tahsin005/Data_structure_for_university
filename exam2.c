#include<stdio.h>

int main () {
    int arr[] = {31, 50, 37, 18, 84, 65, 22, 10, 90};
    int n = sizeof(arr) / sizeof(int);

    int number_of_pass = n - 1;
    for (int k = 1; k <= number_of_pass; k++) {
        int ptr = 0;
        while (ptr <= n - k - 1){
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
