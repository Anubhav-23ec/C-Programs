#include <stdio.h>
int main(){
    char ch;
    
    printf("Enter character : ");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d",ch,ch);        // ASCII value for 'A' starts from 65 & for 'a' 
                                                    // its from 97
    
    return 0;
}