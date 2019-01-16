#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height;
    
    do {
        height = get_int("Please enter the desired height of structure: ");
    } 
        while (height > 15 || height < 0);
    
    for(int i = height; i >= 1; i--) {
        for(int j = 0; j <= height; j++)
            if(j >= i - 1)
                printf("#");
            else
                printf(" ");
        
        printf("\n");
    }
}
