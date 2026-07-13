#include <stdio.h>

void print_rows(int n);

int main(void){

    int height = 8;

    for(int i = 1; i <= height; i++){
        int total_num_spaces = height - i;

        for(int k = 0; k < total_num_spaces; k++){
            printf(" ");
        }
 
        print_rows(i);
    }
}

void print_rows(int n){

    for(int j = 0; j < n; j++){
        printf("#");

        // for(int m = 0; m < n; m++){
        //     printf("#");
        // }
    }

    printf("  ");

    // int total_sp = h - n;

    // for(int k = 0; k < total_sp; k++){
    //     printf(" ");
    // }


    for(int m = 0; m < n; m++){
        printf("#");
    }

    printf("\n");
}