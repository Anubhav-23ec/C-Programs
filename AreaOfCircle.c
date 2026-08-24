#include <stdio.h>
int main(){
    float r;
    
    printf("Enter radius : ");
    scanf("%f",&r);
    
    float area = 3.14 * r * r;
    
    printf("Area of Circle is %f",area);
    
    return 0;
}