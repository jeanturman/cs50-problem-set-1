#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float itemCost = get_float("How much does the item cost? ");
    float moneyGiven = get_float("How much cash will you give for the item? ");
    float changeNeeded = moneyGiven - itemCost;
    
   while (changeNeeded < 0) {
       printf("That's not enough money. How much will you give? ");
       moneyGiven = get_float();
       
    } 
    
    printf("You will receive %f in change as follows: \n", changeNeeded);         
}
