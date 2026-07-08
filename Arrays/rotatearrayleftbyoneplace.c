#include<stdio.h>
 // Rotate array left by one position

 void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}


 int rotateleft(int arr[], int n){
    int last = arr[n-1];  //store last element
    for (int i = n - 1; i >0 ; i--)
    {
       arr[i] = arr[i - 1];  //shift right element
    }
    arr[0] = last;      //put last element at frist
    
 }

 
int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    display(arr, n);
    rotateleft(arr, n);
    display(arr, n);
    return 0;
}
