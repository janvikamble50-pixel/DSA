#include<stdio.h>

int findMissing(int arr[], int n){
    int total = ( n + 1)*(n + 2)/2; //this formula is only for array with 1........n numbers
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
     return total - sum;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 5};
    int n = 4;
    printf("the missing numbe is %d", findMissing(arr, n));
    return 0;
}
