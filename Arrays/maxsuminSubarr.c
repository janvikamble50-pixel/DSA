#include<stdio.h>
//Find maximum subarray sum (Kadane's Algorithm)
int main(int argc, char const *argv[])
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(int);
     int current_sum = arr[0];
     int max_sum = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (current_sum + arr[i] > arr[i])
        {
            current_sum = current_sum + arr[i];
        }
        else{
            current_sum = arr[i];
        }
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
        
        
    }

    printf("Maximum Subarray Sum = %d", max_sum);
    
    return 0;
}
