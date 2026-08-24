#include<stdio.h>
int Nto1(int n){
    
    return n-1;
}
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d", &n);
    int result= Nto1(n);
    printf("%d",result);
    return 0;
}