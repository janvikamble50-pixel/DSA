#include<stdio.h>
#include <stdbool.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
 
}

bool lemonadeChange(int bills[], int billsSize) {
    int five = 0;
    int ten = 0;
    for(int i = 0; i < billsSize; i++){
        if(bills[i] == 5){
            five++;
        }
        else if(bills[i] == 10){
            if(five == 0){
                return false;
            }
            five--;
            ten++;
        }
        else {
            if(ten> 0 && five > 0){
                ten--;
                five--;
            }
            else if(five >= 3){
                five -= 3;

            }
            else{
                return false;
            }

        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
   int bills[] = {5, 5, 5, 10, 20};
   int billsSize = sizeof(bills)/sizeof(int);
   display(bills, billsSize);
   bool ans = lemonadeChange(bills, billsSize);

    if (ans)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
