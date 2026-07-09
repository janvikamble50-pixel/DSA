#include<stdio.h>
// Move all zeros to the end

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}

int movezeroes(int arr[], int n){
    int j = 0 ;//position for all non zero numbers
    for (int i = 0; i < n; i++)
    {
       if (arr[i] != 0)
       {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        j++;
       }
       

    }
    
}



int main(int argc, char const *argv[])
{
    int arr[] = {10, 0, 20, 0, 6, 0};
    int n = 6;
    display(arr, n);
    movezeroes(arr, n);
    display(arr, n);

    return 0;
}
