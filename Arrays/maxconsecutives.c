#include<stdio.h>
// Given a binary array nums, return the maximum number of consecutive 1's in the array.
int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int con = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            con++;

            if (con > max) {
                max = con;
            }
        } else {
            con = 0;
        }
    }

    printf("%d", max);

    return 0;
}