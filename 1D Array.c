#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     for(i=0;i<n;i++){
        s+=arr[i];
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
