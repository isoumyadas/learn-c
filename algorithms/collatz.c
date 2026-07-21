#include <stdio.h>

/* 
- The collatz conjecture is applies to positive integers and speculates that it is always possible to get "back to 1" if you follow these steps:
    - If n is 1, stop.
    - Otherwise, if n is even, repeat this process on n/2.
    - Otherwise, if n is odd, repeat this process on 3n + 1.

- Write a recursive function collatz(n) that calculates how many steps it takes to get to 1 if you start from n and recurse as indicated above.
*/


int recurse(int n){

    // Base case
    if(n == 1){
        return 0;
    }

    // If number is even
    if(n % 2 == 0){
        // int target = recurse(n/2);
        // printf("EVEN -> %i\n", target);
        // return target + 1;

        // in short 
        return recurse(n/2) + 1;

    // If number is odd
    } else {
        // int odd = recurse(3*n + 1);
        // printf("ODD ->  %i\n", odd);
        // return odd + 1;

        return recurse(3*n + 1) + 1;
    }

}


int main(void) {

printf("It took -> %i\n", recurse(78));

}