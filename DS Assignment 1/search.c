#include <stdio.h>

int main () {
    int arr[] = {1, 2, 3, 4 , 5};
    int value = 4;
    int loc = -1;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == value) {
            loc = i + 1;
            break;
        }
    }
    if (loc == -1) {
        printf ("Value not found");
    } else {
        printf ("Value found at location %d", loc);
    }
    return 0;
}
