#include <stdio.h>

int main() {
    int n,reverse,sum;
    printf("enter number:");
    scanf("%d",&n);

    int original = n;
    while(n>0){
        reverse = n % 10;
        printf("%d",reverse);
        n=n/10;
    }
    
    
    printf("original number is %d\n",original);
    printf("reversed number is %d\n",reverse);
    //printf("Sum of original and reversed number is %d",sum);
    
    
    return 0;
}

