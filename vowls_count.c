#include <stdio.h>


int main()
{
    char name[50];
    int i,count = 0;
    scanf("%s",name);
    
    for(i = 0;name[i]!='\0';i++){
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i'|| name[i] == 'o'|| name[i] == 'u' )
        count++;
    }
    
    printf("%d",count);
    return 0;
}
