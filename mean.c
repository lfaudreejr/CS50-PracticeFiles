#include <cs50.h>
#include <stdio.h>


int main(void)
{
    
    int n = 0;
    int input[5] = {0};

    while(n < 5){
        printf("Give me an integer: ");
        input[n] = get_int();
        n = n + 1;
    }
    
    int ave = 0;
    
    for(int i = 0; i < 5; i++){
        ave = ave + input[i];
    }
    
    ave = ave / 5;
    
    printf("Average: %i\n", ave);
    
}