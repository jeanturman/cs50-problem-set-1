#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height;

    // continue prompting until the condition (positive integer less than 21) is met
    do {
        height = get_int("Please enter the desired height of structure, no greter than 20: ");
    } 
        while (height > 21 || height < 0);
    
    // draw the structure incrementally
    for(int i = height; i >= 1; i--) {
        for(int j = 0; j <= height; j++)
            if(j >= i - 1)
                printf("#");
            else
                printf(" ");
        
        printf("\n");
    }
}

    
