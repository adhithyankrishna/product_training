#include<stdio.h>
void main(){
  int i,n,arr[20],position,element;
    //getting array size 
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&search);
    for(i = 0;i<n;i++){
        if (search == arr[i]){
            printf("\n element %d  is present at %d",arr[i],i+1);
            break;
        }
    }
    if (n==i){
        printf("\nelement not found ");
    }
}
