#include<stdio.h>
// Rotate array right by one position

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}

int Rightrotate(int arr[], int n){
    int first = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}


int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    display(arr, n);
    Rightrotate(arr, n);
    display(arr, n);
    return 0;
}
