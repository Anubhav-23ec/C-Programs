#include<stdio.h>
void australia(){
    printf("You're in Australia\n");
    void england();
    england();
    return;
}
void england(){
    printf("You're in England\n");
    return;
}
int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf("You're in India\n");
    void australia();                 // function prototype : function's order don't matters
    australia();
    return;
}