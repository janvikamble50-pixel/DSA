#include<stdio.h>
//sum of wo numbers from the array whose sum is target

int main(int argc, char const *argv[])
{
    int arr[] = {12, 3, 45, 89, 99, 1};
    int target = 100;
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d", arr[i], arr[j]);
            }
            
        }
        
    }
    
    return 0;
}

