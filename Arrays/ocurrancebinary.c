#include<stdio.h>

//  

  /*int Fisrtoccurence(int arr[], int n, int element, int ans){
    int low, high, mid;
    low =0;
    high = n - 1;
    while (low <= high)
    {
        mid = (high + low)/2;

        if (arr[mid] == element)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1; //search in right
        }
        else{
            high = mid - 1;  //search in left
        }
        
        
    }
    if (ans != -1)
    {
        printf("Frist occurence at inex is %d", ans);
    }
    else{
        printf("element not found");
    }
    
  }*/

  int Lastoccurence(int arr[], int n, int element, int ans){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (high + low)/2;
        if (arr[mid] == element)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1; //element must be on right
        }
        else{
            high = mid - 1; //search in the left
        }
       
    }
      
    if (ans != -1)
    {
        printf("the last occurence of %d is at %d", element, ans);
    }
    else{
        printf("Element not found");
    }
    

  }


int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 20, 20, 30, 40, 50};
    int n = 6;
    int element = 20;
    int ans = -1;
    // Fisrtoccurence(arr, n, element, ans);
    Lastoccurence(arr, n, element, ans);
    return 0;
}
