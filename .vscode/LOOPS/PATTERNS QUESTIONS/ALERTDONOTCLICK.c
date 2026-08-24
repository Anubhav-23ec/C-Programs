#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) 
    {
        for (int n = 1; n <= 3; n++) 
        { 
            for (j = 1; j <= 5; j++) 
            {
                if (j == i || i + j == 6) 
                {
                    printf("* ");
                } else 
                {
                    printf("  ");
                }
            }
            if (n < 3) 
            { 
                printf("     ");
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
