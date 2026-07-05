#include<stdio.h>   

int main()
{
    int arr[] = {4, 5, 89, 63, 2};
    int n = 5;
   int sum = 0;
    float avg ;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("the average is %.1f",avg);
    return 0;
}
