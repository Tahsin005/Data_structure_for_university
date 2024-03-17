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
    for (int i = 0; i < n; i++) {
        if (value == arr[i]) {
            loc = i + 1;
            break;
        }
    }

    if (loc == -1) {
        printf("Item not found");
    } else{
        printf("Item found at %d", loc);
    }
    return 0;
}
