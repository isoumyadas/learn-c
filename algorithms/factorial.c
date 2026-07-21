#include <stdio.h>


int five(int n){

    if(n == 1) {
        return 1;
    }
    else {
        int result = n * five(n -1);
        return result;
    }

}

int main(void){
    printf("Factorial is : %i\n", five(5));
}