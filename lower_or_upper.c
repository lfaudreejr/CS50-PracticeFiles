#include <cs50.h>
#include <stdio.h>

void change_char(char input);

int main(void)
{
    printf("Please enter an alphabetical character: ");
    char c = get_char();
    change_char(c);
}

void change_char(char input){
    if(input <= 'z' && input >= 'a'){
        printf("Thanks for the lowercase letter!\n");
    }
    else if(input >= 'A' && input <= 'Z'){
        printf("Thanks for the uppercase letter!\n");
    }
    else {
        printf("You did not enter an alphabetical character!\n");
    }
}