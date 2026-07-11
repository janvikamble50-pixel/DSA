#include<stdio.h>
// Find intersection of two arrays

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 5, 4, 8};
    int n1 = sizeof(arr1)/sizeof(int);

    int arr2[] = {3, 5, 7, 3, 8};
    int n2 = sizeof(arr2)/sizeof(int);

    printf("Intersectio: ");

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
            }
            
        }
        
    }
    


    return 0;
}
