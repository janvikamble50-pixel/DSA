#include<stdio.h>
//show the second largest element in array
int main()
{
    int arr[] = {100, 200, 300, 400, 500};
    int n= 5;
    int max = arr[0];
    int s = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            s = max;
            max = arr[i];
            
        }
        else if (arr[i] > s && arr[i] != max)
        {
           s = arr[i];
        }
    }

    printf("SECOND LARGEST IS: %d",s);
    return 0;
}
