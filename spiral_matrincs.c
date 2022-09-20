#include<stdio.h>

void main(){
    int mat[4][4] = 
    {{1, 2, 3, 4},
    { 5, 6, 7, 8},
    { 9, 10,11,12},
    { 13,14,15,16}};
    int i,j,count = 4;
    int temp1 = 0,temp2 = 0,r = 0,c = 0;

    while(temp1!=count && temp2!=count){
        for ( i = 0; i < count - temp1; i++)
        {
            printf("\t%d",mat[r][i]);
            printf("\nfrom 1 %d %d",r,i);
        }
        for ( j = 1; j < count - temp2; j++)
        {
            printf("\t%d",mat[j][i-1]);
            printf("\nfrom 2 %d %d",j,i-1);
        }
        r = j-1;
        
        //temp2++;
        for ( i = r-1; i >=temp1; i--)
        {
            printf("\t%d",mat[r][i]);
            printf("\nfrom 3 %d %d",r,i);
        }
        c = i;
        for ( i = r-1; i >temp2; i--)
        {
            printf("\t%d",mat[i][c]);
            printf("\nfrom 4 %d %d",i,c);
        }
        temp1++;
        temp2++;
        
        
    }

    
}