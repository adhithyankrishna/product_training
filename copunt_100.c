#include<stdio.h>

void main(){
    int i,n = 5,less_zero = 0,grater_100 = 0,between_1_100 = 0;
    int arr[5] = {12,545,28,-12,34};
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] <= 0){
            less_zero++;
        }
        else if (arr[i] >=100)
        {
            grater_100++;
        }
        else{
            between_1_100++;
        }
        
    }

    printf(" less than zero %d\ngrater than 100 %d \nbetween 0 and 100  %d",less_zero,grater_100,between_1_100);
    
}