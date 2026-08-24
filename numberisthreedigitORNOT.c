#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    if (n >= 100 && n < 999){
        printf("%d is a three digit number",n);
    }
    else{
        printf("NO");
    }
    return 0;
}