#include<stdio.h>
//Third maximum number

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int s = arr[0];
    int t = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            t = s;
            s = max;
            max = arr[i];
        }
        else if (arr[i] >  s && arr[i] != max)
        {
            t = s;
            s = arr[i];
        }
        else if (arr[i] > t && arr[i] != s && arr[i] != max)
        {
            t = arr[i];
        }
    }
    printf("The third minimum in the array is %d", t);
    return 0;
}
