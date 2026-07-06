#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 10, 30, 20, 10};
    int n = 6;
     int visited[n];
     int count;

     for (int i = 0; i < n; i++)
     {
        visited[i] = 0;
     }
     
for (int i = 0; i < n; i++)
{
    if (visited [i] == 1)
    {
        continue;

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
            
        }
        
    }
    printf("%d occurs %d times\n", arr[i], count);
}


    return 0;
}
