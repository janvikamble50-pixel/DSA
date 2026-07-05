#include<stdio.h>
//check if array is sorted or not

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int n =5;
    int sorted = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i+1]) //this means (1>2) X so it will give sorted as 0; for checking if the array os in ascending order we give the condition of desceding order
        {
            sorted = 0;
            break;
        }
        
    }
    if (sorted == 1)
    {
        printf("array is sorted in ascending order");
    }
    else{
        printf("array is not sorted");
    }
    
    return 0;
}


