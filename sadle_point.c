#include<stdio.h>

void main(){
    int mat[3][3] = {{1,2,4},{3,4,2},{7,8,9}};
    int min = 99999,max = 0,i,j,pos;

    for(i = 0;i<3;i++){
        for (j = 0;j<3;j++){
            if (min>mat[i][j]){
                min = mat[i][j];
                pos = j;
                //printf("\nfrom 1  %d %d",min,max);
            }
        }
        for(j = 0;j<3;j++){
            if (max<mat[j][pos]){
                max = mat[j][pos];
                //printf("\nfrom 2 %d  %d",min,max);
            }
        }
        //printf(" %d",min);
        if (max == min){
            printf("%d",max);
        }

        min = 99999;
        max = 0;
    }
}