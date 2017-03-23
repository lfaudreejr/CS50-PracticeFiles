#include <cs50.h>
#include <stdio.h>



int main(void)
{
    int n = 0;
    string myArray[5];

    while ( n < 5 ){
        printf("Give me a pokemon: ");
        myArray[n] = get_string();
        n = n + 1;
    }

    int r;
    
    do {
        r = rand();
    }
    while ( r >= 5);
    
    printf("%s, I choose you!", myArray[r]);
    printf("\n");
    
}


