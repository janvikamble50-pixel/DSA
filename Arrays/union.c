#include<stdio.h>
// Find union of two arrays

int main(int argc, char const *argv[])
{
     int arr1[] = {1, 2, 5, 4, 8};
    int n1 = sizeof(arr1)/sizeof(int);

    int arr2[] = {3, 5, 7, 3, 8};
    int n2 = sizeof(arr2)/sizeof(int);

    printf("Union: ");

    for (int i = 0; i < n1; i++)
    {
        printf("%d ",arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        int found = 0;

        for (int j = 0; j < n1; j++)
        {
            found = 1;
            break;
        }
        if (found == 0)
        {
            printf("%d ", arr2[i]);
        }
    }
    
    
    return 0;
}
