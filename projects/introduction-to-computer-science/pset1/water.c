#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
int bottles, ounces, minutes;
    
    printf("How many minutes did you spend in the shower this morning?\n");
    minutes = get_int();
    ounces = minutes * 192;
    bottles = ounces / 16;
    printf("You used about %i bottles of water to shower this morning!\n", bottles);
}