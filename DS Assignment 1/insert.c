#include <stdio.h>
int main () {
    int arr[6] = {1, 2, 3, 4, 5};
    int pos = 2;
    int value = 77;

    int idx = 5 - 1;
    while (idx >= pos) {
        arr[idx + 1] = arr[idx];
        idx--;
    }

    arr[pos] = value;
    printf ("The elements of the array after inserting : ");
    for (int i = 0; i < 5 + 1; i++) {
        printf ("%d ", arr[i]);
    }
    return 0;
}
