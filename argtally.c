#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int count = 0;
    
    for(int i = 1; i < argc; i++){
        count += strlen(argv[i]);
    }
    printf("%i\n", count);
}