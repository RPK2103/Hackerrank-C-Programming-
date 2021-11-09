#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char num[1000];
    int f[10],i,j,count;
    scanf("%s",num);
    for(i=0;i<10;i++)
    {
        count=0;
        for(j=0;j<strlen(num);j++){
            if(num[j]==(i +'0'))
            count++;
        }
        f[i]=count;
    }
    for(i=0;i<10;i++){
        printf("%d ",f[i]);
    } 
    
    return 0;
}
