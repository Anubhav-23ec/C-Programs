#include<stdio.h>
int main(){
    int num;
    printf("Enter number : " );
    scanf("%d",&num);

    if (num < 0){
        printf("Absolute number is %d",num = num * (-1));
    }
    else{
        printf("Absolute number is %d",num);
    }
    return 0;
}