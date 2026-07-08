#include<stdio.h>
// Remove duplicates from sorted array

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}

int Removeduplictaes(int arr[], int n){
    int j = 0; //position for uniques elemnts
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
        
    }
    return j + 1; //new size
}



int main(int argc, char const *argv[])
{
    int arr[] = {10, 10, 20, 20, 30, 40, 40, 40};
    int n = sizeof(arr)/sizeof(int);
    display(arr, n);
    int newSize = Removeduplictaes(arr, n);
    display(arr, newSize);
    return 0;
}
