#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the item : ");
    int value; scanf("%d", &value);

    int loc = -1;

    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == value) {
            loc = mid + 1;
            break;
        }

        if (value < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (loc == -1) {
        printf("Item not found");
    } else{
        printf("Item found at %d", loc);
    }
    return 0;
}
