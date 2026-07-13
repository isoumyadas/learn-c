#include <stdio.h>
#include <stdbool.h>

int main(void){

    // while loops

    int i = 0;

    while(i < 3){
        printf("Hello soumya\n");
        i++;
    }

    // for loops

    for(int i = 0; i < 3; i++){
        printf("Sammmmmmmmmmmmmmmmm......\n");
    }

    // break & continue

    for(int value = 0; value < 10; value++){
        if(value == 5){
            printf("You're the witch\n");
            continue;
        } else if (value == 9){
            break;
        }

        printf("%i\n", value);
    }

    // do while loop
    // Runs At least 1 time, no matter what. Where you want to ask user at least once before checking if their input is valid.
    int k = 0;
    do
    {   
        printf("Jaadu\n");
        k++;
    } 
    while(k < 10);

}