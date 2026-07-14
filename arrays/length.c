#include <stdio.h>
#include <string.h>

int main(void) {

    char *names[2];

    char *title = "sam";

    // To find length:

    // 1: Using a loop

    int n = 0;

    while(title[n] != '\0'){
        n++;
    }

    printf("%i\n", n);

    // 2: using string file which is header file.

    char *name = "sammy";
    int m = strlen(name);
    printf("%i\n", m);

    // Problem in this code: You are checking the boolean expression + function again & again in this loop. 

        // Inefficient code

            for(int i = 0; i < strlen(name); i++){
                printf("%c", name[i]);
            }
            printf("\n");

        // Better code

            char *heading = "Soumya R Das";

            for(int i = 0, head_len = strlen(heading); i < head_len; i++){
                printf("%c", heading[i]);
            }
            printf("\n");

}