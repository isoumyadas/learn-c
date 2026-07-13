#include <stdio.h>

// prototype 
// void mewo(void); // we are declaring here, so c compiler knows that this function will exists later in the code or exists already.
                // If we tried to define it here but their is no function, it will throw an error.

int mewo(int n);
int looping(int n);

int main(void){

    // for(int i = 0; i < 3; i++){
    //     mewo();
    // }

    mewo(8);
    printf("%i\n", looping(5));
    // looping(15);
}

// void means this functions doen't return anything and in parameters the void means it doesn't accept any arguments.
// void mewo(void){
//     printf("Mewo\n");
// }

int mewo(int n){
    for(int i = 0; i < n; i++){
        printf("Mewo\n");
    }
}

int looping(int n){
    int result = 0;
    for(int i = 0; i < n; i++){
        result += i;
    }

    return result;

// 0 + 0 = 0
// 1 + 0 = 1
// 2 + 1 = 3
// 3 + 3 = 6
// 4 + 6 = 10
}

