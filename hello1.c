#include<stdio.h>

int main() {
    int a[6] = {1, 2, 3, 4, 5};


    int k = 2;

    int j = 5 - 1;

    while (j >= k) {
        a[j + 1] = a[j];
        j--;
    }
    a[k] = 99;

    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }



    return 0;
}

;
