#include <stdio.h>

int linear_search(int arr[], int n, int x);

int main() {
    int arr[100], n, x, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &x);

    pos = linear_search(arr, n, x);

    if (pos == -1) {
        printf("Value not found.\n");
    } else {
        printf("Value found at position %d.\n", pos);
    }

    return 0;
}

int linear_search(int arr[], int n, int x) {
    int i; 

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}
 