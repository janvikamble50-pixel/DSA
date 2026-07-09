#include<stdio.h>
//find the element that appears more than n/2 times.

int main(int argc, char const *argv[])
{
    int arr[] = {2, 2, 2, 1, 1, 2};
    int n =6;
    int count = 0;
    
     for (int i = 0; i < n; i++)
     {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
        
         if (count > n/2)
        {
             printf("%d is the majority element", arr[i]);
             break;
        }    
     }
     



    return 0;
}
