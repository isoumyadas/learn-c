#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){

    char *name = "soumya";

    // 1: This is how it can be implemented with loops

    for(int i = 0, n = strlen(name); i < n; i++){

        // printf("%c\n", name[i]);
        // printf("%i\n", name[i]);

        // If name[i] is lowercase
        if(name[i] >= 'a' && name[i] <= 'z'){
            printf("%c", name[i] - 32); // Because in ASCII the space between Uppercase and Lowercase is 32.
        
        } 
        // If it's not a lowercase
        else {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    

    // 2: Using ctype.h lib

    for(int i = 0, n = strlen(name); i < n; i++){

        // If name[i] is lowercase
        if(islower(name[i])){
            printf("%c", toupper(name[i]));
        
        } 
        // Else if not lowercase
        else {
            printf("%c", name[i]);
        }
    }
    printf("\n");



    // 3: But better version is:

    for(int i = 0, n = strlen(name); i < n; i++){
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}