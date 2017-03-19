#include <cs50.h>
#include <stdio.h>

bool valid_triangle(int x, int y, int z);

int main(void)
{
    int a = get_int();
    int b = get_int();
    int c = get_int();
    
    int d = valid_triangle(a, b, c);
    
    if(d){
        printf("Is a triangle\n");
    } else { printf("Not a triangle\n");}
}

bool valid_triangle(int x, int y, int z){
    if(x <= 0 || y <= 0 || z <= 0){
        return false;
    }
    else
    {
        if(x + y > z || y + z > x || x + z > y){
            return true;
        }
        else {
            return false;
        }
    }
}