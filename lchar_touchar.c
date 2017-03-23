#include <cs50.h>
#include <stdio.h>

void bit_upper(char input);

int main(void)
{
    printf("Enter a lowercase letter: ");
    char x = get_char();
    bit_upper(x);
}

void bit_upper(char input){
    if(input <= 'z' && input >= 'a'){
        input = input & 223;
        printf("%c\n", input);
    }
    else {
        printf("Not a valid letter");
    }
}