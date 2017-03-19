#include <cs50.h>
#include <stdio.h>

void cap_alphabet();

int main(void)
{
    cap_alphabet();
}

void cap_alphabet()
{
    for(int i = 'A'; i <= 'Z'; i++)
    {
        printf("%c\n", i);
    }
}