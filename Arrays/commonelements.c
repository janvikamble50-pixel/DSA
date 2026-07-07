#include<stdio.h>
// Find common elements in two arrays

int commonelements(int arr1[], int n1, int arr2[], int n2){
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] )
            {
                printf(" %d", arr1[i]);
                break;
            }
            
        }
        
    }
    
}



int main(int argc, char const *argv[])
{
    int arr1[] = {10, 20, 30, 40};
    int n1 = 4;
    int arr2[] = {10, 50, 60, 20};
    int n2= 4;
    commonelements(arr1, n1, arr2, n2);
    return 0;
}
