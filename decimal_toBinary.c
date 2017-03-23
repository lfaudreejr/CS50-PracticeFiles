#include <cs50.h>
#include <stdio.h>
#include <math.h>

void decimal_toBinary(int deci);

int main(void)
{
    
    int input;
    
    do{
        printf("Enter a positive decimal value: ");
        input = get_float();  
    }
    while ( input <= 0);
    
    //conver to binary
    decimal_toBinary(input);
    
    return 0;
}

void decimal_toBinary(int deci){
    
    int binary[31];
    
    int count;
    
    //calculate binary by getting the mod and then dividing by two each time
    for(count = 0; deci != 0; count++, deci /= 2){
        binary[count] = deci % 2;
    }
    
    //print the binary array starting from highes count
    for(count = count - 1; count >= 0; count--){
        printf("%i", binary[count]);
    }
    
    printf("\n");
}