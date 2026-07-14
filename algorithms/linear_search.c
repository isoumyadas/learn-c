#include <stdio.h>
#include <stdbool.h>

bool linear_search_algorithm(int numbers[], int target, int length);

int main(void) {

    int numbers[] = {34, 5, 78, 90, 56};
    int target = 78;
    int length = 5;

   if( linear_search_algorithm(numbers, target, length)) {
    printf("We successfully found the, %i\n", target );
   }

}

bool linear_search_algorithm(int numbers[], int target, int length){

    // printf("We've entered this scope\n");

    for(int i = 0; i < length; i++){
        printf("We've entered for loop, %i\n", numbers[i]);

        if(numbers[i] == target){
            // printf("We've entered the if condition\n");
            return true;
        }
        // printf("We're outside of if condition\n");
        
    }

    return false;

}
