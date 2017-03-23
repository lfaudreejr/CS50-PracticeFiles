#include <cs50.h>
#include <stdio.h>

void reverse_alpha();

int main(void)
{
    reverse_alpha();
}

void reverse_alpha()
{
    for(int i = 'Z'; i >= 'A'; i--)
    {
        printf("%c\n", i);
    }
}