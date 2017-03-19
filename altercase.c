#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void altercase(string input);

int main(void)
{
    printf("Enter a phrase: ");
    string phrase = get_string();
    altercase(phrase);
}

void altercase(string input){
    string p = input;
    bool capitalize = true;
    
    for(int i = 0, j = strlen(p); i < j; i++){
        if(isalpha(p[i])){
            if(capitalize == true){
                printf("%c", toupper(p[i]));
            }
            else {
                printf("%c", p[i]);
            }
            
        capitalize = !capitalize;
        
        }        
        else {
            printf("%c", p[i]);
        }
    }
    
}