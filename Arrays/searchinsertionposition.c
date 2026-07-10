#include<stdio.h>
/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.*/

int search(int arr[], int n, int target){
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return n;   // Insert at the end
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 10, 15, 20};
    int target = 0;
    int n = sizeof(arr)/sizeof(int);

    printf("Index = %d", search(arr, n, target));
    return 0;
}
