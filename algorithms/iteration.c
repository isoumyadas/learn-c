#include <stdio.h>

void draw(int n) {
    // For each row of pyramid
    for(int i = 0; i < n; i++){

        // For each column of pyramid 
        for(int j = 0; j < i+1; j++){
            printf("#");
        }
        printf("\n");
    }
}

int main(void) {
    int height = 3;

    draw(height);
}

// Let understand it step by step about the draw function nested loop

// First Pass: Row 1
//     Outer Loop: Starts at i = 0. Since $0 < 3$, we enter the loop.
//     Inner Loop: Starts at j = 0. The rule is j < i + 1. Since i is 0, the rule is `j < 1`.
//         j = 0: $0 < 1$ is true. It prints #. It adds 1 to j.
//         j = 1: $1 < 1$ is false. The inner loop stops.
//     Newline: The code moves to printf("\n"); and hits enter.

// Screen shows: #

// Second Pass: Row 2 
//     Outer Loop: i goes up to 1. Since $1 < 3$, we enter the loop again.
//     Inner Loop: The inner loop completely resets back to j = 0. The new rule is j < i + 1. Since i is now 1, the rule is `j < 2`.
//         j = 0: $0 < 2$ is true. It prints #.
//         j = 1: $1 < 2$ is true. It prints #.
//         j = 2: $2 < 2$ is false. The inner loop stops.
//     Newline: The code moves to printf("\n"); and hits enter.

// Screen shows: # ##

// Third Pass: Row 3
//     Outer Loop: i goes up to 2. Since $2 < 3$, we enter the loop.
//     Inner Loop: Resets back to j = 0. The new rule is j < i + 1. Since i is now 2, the rule is `j < 3`.
//         j = 0: $0 < 3$ is true. It prints #.
//         j = 1: $1 < 3$ is true. It prints #.
//         j = 2: $2 < 3$ is true. It prints #.
//         j = 3: $3 < 3$ is false. The inner loop stops.
//     Newline: The code hits printf("\n");

// Screen shows: # ## ###