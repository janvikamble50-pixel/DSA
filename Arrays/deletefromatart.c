#include<stdio.h>
/*arr[i] = arr[i+1] → copy next element to current position → shift left 0<i=n-1
  arr[i] = arr[i-1] → copy previous element to current position → shift right n<i>index✅*/

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf(" \n");
 }

int DeleteatBegin(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    display(arr, n);
    DeleteatBegin(arr, n);
    n -=1;
    display(arr, n);
    return 0;
}
