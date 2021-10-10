#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0,temp;
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
