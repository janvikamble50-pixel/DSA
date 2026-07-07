#include<stdio.h>

int Find(int arr[], int element, int size){
    int low, high, mid;
    low = 0;
    high = size - 1;
    //Start searching 
    while (low <= high)
    {
        mid = (high + low)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;  //searches the right half
        }
        else{
            high = mid - 1;  //searches the left half
        }
        
    }

    return -1;

}

 

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr)/sizeof(int);
    int element = 80;
    int searchindex = Find(arr, element, size);
    printf("the element %d is found at index %d", element, searchindex);
    return 0;
} 
 