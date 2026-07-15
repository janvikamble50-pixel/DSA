#include<stdio.h>
//cunt the number of even numbers and odd numbers
int main(int argc, char const *argv[])
{
    int arr[] = {23, 56, 78, 33, 27};
    int n = 5;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
           even++;
        }
        else{
            odd++;
        }
    }
    
    printf("\nThe no. of even elements is %d",even);    
    printf("\nThe no. of odd elements is %d",odd);

    return 0;
}
