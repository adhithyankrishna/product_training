#include<stdio.h>

void main(){
    int n,i,j,k = 1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for (i = 1;i<=n;i++){
        for ( j = 1;j <=n;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}