#include<stdio.h>
//copy one array to another

int main(int argc, char const *argv[])
{
    int arr1[] = {10, 20, 30, 40, 50};
    int n = 5;
    int arr2[6];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    
    printf("Copied array :");

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr2[i]);
    }
    
    return 0;
}
