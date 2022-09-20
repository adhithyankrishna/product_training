/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mat1[3][3] = 
    {{1,2,3},
     {2,3,4},
     {4,5,6}};
    //int mat2[3][3] = {{4,2,4},{7,4,5},{1,8,2}};
    int max = 0,min = 99999;
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            if (max < mat1[i][j]){
                max = mat1[i][j];
            }
            if (min > mat1[j][i]){
                min = mat1[j][i];
            }
        }
        
        printf("max = %d\tmin = %d\n",max,min);
        min = 99999;
        max = 0;
    }
    
    
    
    

    return 0;
}
