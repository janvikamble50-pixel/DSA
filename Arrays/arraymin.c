#include<stdio.h>
//to show the minimum element in the array

int main()
{
    int arr[] = {1, 2, 0, 89, 56};
    int n = 5;
    int min = arr[0]; //assume the first smallest element is at arr[0]

    for (int i = 0; i < n; i++)
    {
        if (arr[i]< min)  //compare every elemnt if it is smaleer than element at arr[0]
        {
            min = arr[i];
        }
        
    }
    
    printf("the smallest element is %d", min);

    return 0;
}
