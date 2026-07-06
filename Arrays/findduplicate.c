#include<stdio.h>

int findDuplicate(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i +1; j < n - 1; j++)
        {
           if (arr[i] == arr[j])
        {
            
            printf(" %d",arr[i]);
            
        } 
        }
        
        
        
    }
    
}


int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 20, 40};
    int n = 5;
    findDuplicate(arr, n);
    return 0;
}
