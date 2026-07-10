#include<stdio.h>
//Find longest subarray length with given sum

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    int target = 6;
    int maxlen = 0;
    

   for (int i = 0; i < n; i++)
   {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
        sum = sum + arr[j];

        if (sum == target)
        {
            int len = j - i + 1;
        
        if (len > maxlen)
        {
            maxlen = len;
        }
    }
        
    }
    
   }

   printf("the longest subarray with the given sum has length %d", maxlen);
   
    return 0;
}
