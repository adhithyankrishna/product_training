#include<stdio.h>


void main(){
    char values[20][20][20] = {{"","one","two","three","four","five","six","seven","eight","nine"},
    {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"},{
    "","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"},{
      "","", "hundred ","thousand"
    }};
    int num,i = 0,j;
    printf("enter the : ");
    scanf("%d",&num);
    int count = 0,count2 = 0,temp, arr[6],rem;

    temp = num;

    while(temp!=0){
        rem = temp%10;
        temp = temp /10;
        arr[i] = rem;
        i++;
        count++;
    }
    arr[i] = -1;
    i = 0;
    count2 = count-1;
  
   
   i = 0;
   while(arr[i]!=-1)
    {
        if (count>=3 && arr[count2-i]!=0){
            printf("%s %s ",values[0][arr[count2-i]],values[3][count-1]);
            count--;
            i++;
        }
        //500printf("\nfr %d %d",arr[i],arr[i+1]);
        if (count == 2 && arr[count2-i]!=0 && arr[count2-i+1]!=0){
            printf(" and ");
        }
        if (count<3){
           // printf("%d",arr[i+1-1]);
            if (count == 2 && arr[i+1] == 1 ){
                printf("%s",values[1][arr[i]]);
                count-=2;
                i+=2;
            }
            if (count == 2){
                printf(" %s",values[2][arr[count2-i]]);
                count--;
                i++;
            }
            if (count == 1){
                printf(" %s",values[0][arr[count2-i]]);
                i++;
                count--;
            }
        }
    }
  

}