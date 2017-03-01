#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int i;
    
    //get users full name
    //printf("Please, enter your full name:\n");
    string name = get_string();
    
    if (name != NULL)
    {
        //print frist uppercase letter
        printf("%c", toupper(name[0]));
        
        //iterate through string
        for (i = 0; i < strlen(name); i++)
        {
            //check if there's spaces to print the next char along
            if (name[i] == ' ')
            {
                printf("%c", toupper(name[i+1]));
            }
        }
    }
    printf("\n");
}