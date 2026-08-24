#include<stdio.h>
int main(){
    int a=1,b=1,n,i,sum;
    printf("enter number:");
    scanf("%d",&n);

    for(i=1;i<=n-2;i++){
        sum = a +b;
        a=b;
        b=sum;
    }
    printf("The %dth Fibonacci Term is %d",n,sum);

    return 0;
} 
