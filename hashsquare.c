#include <cs50.h>
#include <stdio.h>

void hashbox(int n);

int main(void)
{
    
    int n = 0;
    
    do {
        printf("Enter a number between 1 and 23: ");
        n = get_int();
    } while (n < 1 && n > 23);
    
    hashbox(n);
    
}

void hashbox(int n){
    
    //print a n by n square with hashes
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++){
            printf("#");
        }
        printf("\n");
    }
}