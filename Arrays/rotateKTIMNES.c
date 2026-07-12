#include <stdio.h>
//Reverse the entire array, then reverse the first k elements, and finally reverse the remaining elements.

void reverse(int arr[], int start, int end){
    while (start < end) //start index = 0, end = 4
    {
        int temp = arr[start];
        arr[start] = arr[end]; 
        arr[end] = temp;

        start++;
        end--;
    }
    
}

void rotate(int arr[], int n, int k) {
    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    display(arr, n);

    rotate(arr, n, k);

    printf("Rotated Array: ");
    display(arr, n);

    return 0;
}