#include<stdio.h>

void main(){
    int i,n = 5;
    int arr[5] = {1,2,3,4,5},secon_arr[5];
    for (i = 1;i<=n;i++){
        secon_arr[i-1] = arr[n-i];
    }
    for ( i = 0; i < n; i++)
    {
        printf("\t%d",secon_arr[i]);
    }
    
    
    
}