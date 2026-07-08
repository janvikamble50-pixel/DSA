#include<stdio.h>
// Rearrange positive and negative numbers(arrange positive and negative numbers alternately)

int main(int argc, char const *argv[])
{
    int arr[] = {1, -2, -4, -1, 6, 8};
    int n = sizeof(arr)/sizeof(int);
    int pos[n];
    int neg[n];
    int p = 0;
    int q = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]> 0)
        {
           pos[p] = arr[i];
           p++; //the index of the arr pos adds up whevere there is a positive integer
        }
        else{
            neg[q] = arr[i];
            q++;

        }  
    }

    for (int i = 0; i < p && i< q; i++)
    {
        printf("%d ", pos[i]);
        printf("%d ", neg[i]);
    }
    
    
    return 0;
}
