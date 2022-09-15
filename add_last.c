#include<stdio.h>

void main(){
    int i,n = 7;
    int arr[7] = {1,2,3,5,6,5,4},add[5] = {},count = 0;
    for ( i = 0; i < n/2; i++)
    {
        add[i] = arr[i] + arr[n-i-1];
        count++;
    }
    if (n%2 !=0){
        printf("\n%d\n",i);
        add[i] = arr[n/2];
        count++;
    }
    for ( i = 0; i < count; i++)
    {
        printf("\t%d",add[i]);
    }
    
    
}