#include<stdio.h>
// Check if two arrays are equal

int main(int argc, char const *argv[])
{
    int arr1[] = {10, 20, 30, 40};
    int n1 = sizeof(arr1)/sizeof(int);

    int arr2[] = {10, 100, 30, 40};
    int n2 = sizeof(arr2)/sizeof(int);

    if (n1 != n2)
    {
        printf("Arrays are not equal");
        return 0;
    }

    int e = 1; //first assume the condition is true

    for (int i = 0; i < n1; i++)
    {
       
        
            if (arr1[i] != arr2[i])
            {
                e = 0;
                break;
            }
            
        
        
    }
    if (e == 1)
    {
        printf("two arrays are equal");
    }
    else{
        printf("arrays are not equal");
    }
    

    
    return 0;
}
