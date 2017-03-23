#include <cs50.h>
#include <stdio.h>

void celsius(double f);

int main(void)
{
    double f;
    
    printf("Enter a degree in Fahrenheit: ");
    f = get_double();

    
    celsius(f);
}

//convert f to celsius
void celsius(double f){
    double s = ((f - 32) / 1.8);
    printf("%.1f\n", s);
}