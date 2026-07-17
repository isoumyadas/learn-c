#include <stdio.h>
#include <string.h>


// Inside regular C logic conditions, 1 means true and 0 means false.
// But for the exit status of a whole program, the rules flip: 0 means "zero errors encountered" (Success).

int main(void){

    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char *target = "ok";
    // To find the length of any array in C, you divide the total memory size of the array by the memory size of a single element.
    int length = sizeof(strings) / sizeof(strings[0]);


    for(int i = 0; i < length; i++){

        // 1st way

        // if(strings[i] == target){
        //     printf("Found: %s\n", target);
        //     return 0;
        // }

        // 2nd way

         if(strcmp(strings[i] , target) == 0){
            printf("Found: %s\n", target);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;

}