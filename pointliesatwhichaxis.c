#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("Lies at Origin");
    }
    else if(x==0){
        printf("Lies at y-axis");
    }
    else{
        printf("Lies at x-axis");
    }
    return 0;
}