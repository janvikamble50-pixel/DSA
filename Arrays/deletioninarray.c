 #include<stdio.h>
 void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf(" \n");
 }


int deletion(int arr[], int index, int size, int capacity){
    if (index >= capacity)
    {
        return -1;
    }
    else{
     for (int i = index; i < size - 1 ; i++)
    {
       arr[i] = arr[i + 1];
    }
    }
  
}

 int main(int argc, char const *argv[])
 {
   int arr[100] = {1, 2, 3, 4, 5};
   int size = 5; //used size is 5 (count from 1 --- 5)
   int index = 3; //index of the number you want to delete
   int capacity = 100; //total size of array 
   display(arr, 5);
   deletion(arr, size, index, capacity);
//    size -= 1;
   display(arr, size); 


   
    return 0;
 }
 

