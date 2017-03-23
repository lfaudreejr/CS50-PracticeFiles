#include <cs50.h>
#include <stdio.h>

void multiples(int n);

int main(void)
{
    int n = 0;
    
    do {
        printf("Enter a number between 1 and 100: ");
        n = get_int();
    }
    while (n < 0 || n > 100);
    
    multiples(n);
    
}

void multiples(int n){
    
    //print the multiple of n till 100
    int x = 0;
    
    for(int i = 0; i < 100/n; i++){
        x += n;
        printf("%i ", x);
    }
    
    printf("\n");
}