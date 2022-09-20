/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mat1[3][3] = {{1,2,3},{2,3,4},{4,5,6}};
    //int mat2[3][3] = {{4,2,4},{7,4,5},{1,8,2}};
    int sum = 0;
    for(int i = 0;i<3;i++){
        sum = 0;
        for(int j=0;j<3;j++){
            sum = sum + mat1[i][j];
        }
        
        printf("%d\n",sum);
    }
    
    
    
    

    return 0;
}
