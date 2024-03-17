#include <stdio.h>
int main () {
    int arr[] = {1, 2, 3, 4, 5};

    int pos = 2;

    for (int i = pos; i < 5 - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf ("The elements of the array after deleting : ");
    for (int i = 0; i < 5 - 1; i++) {
        printf ("%d ", arr[i]);
    }
    return 0;
}

