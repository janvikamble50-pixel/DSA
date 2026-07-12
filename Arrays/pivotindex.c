 #include<stdio.h>
//At pivot index Sum of all elements to the left = Sum of all elements to the right 

int pivotindex(int  arr[], int n){
    int sum = 0;
    int lsum = 0;
    int rsum = 0;
   
     for (int i = 0; i < n; i++)
    {
       sum = sum + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rsum = sum - lsum - arr[i];
        if (rsum == lsum)
        {
            return i;
        }
        lsum = lsum + arr[i];
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(int);
   
     int pivot = pivotindex(arr, n);

    if (pivot == -1)
        printf("No Pivot Index Found\n");
    else
        printf("Pivot Index = %d\n", pivot);

   
    return 0;
}
