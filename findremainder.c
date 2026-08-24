#include<stdio.h>
int main(){
    int a,b,rem;

     printf("Enter value of a & b (a > b) : ");
    scanf("%d %d",&a,&b);

    rem = a % b;

    printf("Remainder is %d",rem); 
    
    return 0;
}