#include<stdio.h>

void main(){
    int mat[6][6] = 
    {{1, 2, 3, 4,61,62},
    { 5, 6, 7, 8,63,64},
    { 9, 10,11,12,65,66},
    { 13,14,15,1667,68,99},{
      68,69,70,71,72,77},
     { 91,92,93,94,95,96
    }};
    int i,j,count = 6;
    int temp1 = 0,temp2 = 0,r = 0,c = 0,t = 0,l = 0;
    
    while(temp1!=count && temp2!=count){
        for ( i = l; i < count - temp1; i++)
        {
            printf("\t%d",mat[t][i]);
            //printf("\nfrom 1 %d %d",r,i);
        }
    
        for ( j = 1+l; j < count - temp2; j++)
        {
            printf("\t%d",mat[j][i-1]);
            //printf("\nfrom 2 %d %d",j,i-1);
        }
        r = j-1;
        //temp2++;

        for ( i = r-1; i >=temp1; i--)
        {
            printf("\t%d",mat[r][i]);
            //printf("\nfrom 3 %d %d",r,i);
        }
        c = i+1;

        for ( i = r-1; i >temp2; i--)
        {
            printf("\t%d",mat[i][c]);
            //printf("\nfrom 4 %d %d",i,c);
        }
        temp1++;
        temp2++;
        t++;
        l++;
        
    }

    
}
