#include<stdio.h>
//it works well with higher numvber of rows and also look perfect in odd number
void main(){
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for (i = 1;i<=n;i++){
        for ( j = 1;j <=n;j++)
        {
            if (j == 1||j==n||i==n||i==1||i==n||j==i||j==n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}