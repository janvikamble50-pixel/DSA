#include <stdio.h>
//running sum = Each element becomes the sum of itself and all the previous elements.
void runningSum(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    display(arr, n);

    runningSum(arr, n);

    printf("Running Sum: ");
    display(arr, n);

    return 0;
}