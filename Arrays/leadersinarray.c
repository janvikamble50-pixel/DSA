#include<stdio.h>
//An element is called a leader if it is greater than all the elements to its right.

int main(int argc, char const *argv[])
{
    int arr[] = {12, 10, 3, 4, 5, 2};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        int leader = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
               leader = 0;
               break;
            }
            
        }

        if (leader == 1)
        {
            printf("%d ",arr[i]);
        }
        
        
    }
    
    return 0;
}
