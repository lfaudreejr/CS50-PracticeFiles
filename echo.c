#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if(argc < 2){
        printf("Fail argument count\n");
        return 1;
    }
    
    for(int i = 1; i < argc; i++ ){
        printf("%s", argv[i]);
        printf(" ");
    }
    
    printf("\n");
}