#include<stdio.h>
// Merge two arrays
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}

int merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
    for (int i = 0; i < n1; i++)
    {
        arr3[i]= arr1[i]; //copy one array to arr3
    }

    for (int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];  //copy arr2 to arr3
    }
}


int main(int argc, char const *argv[])
{
   int arr1[] = {10, 20, 30};
   int n1 = 3;

   int arr2[] = {40, 50, 60};
   int n2 = 3;

   int arr3[6];
   merge(arr1, 3, arr2, 3, arr3);
   display(arr3, 6);

    return 0;
}
