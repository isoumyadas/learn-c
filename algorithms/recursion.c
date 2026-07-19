#include <stdio.h>

void draw(int n) {
    // base case

    if(n <= 0)
        return;

    draw(n - 1);

    // This run after the base case hits, backtracking (learn more about it)
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}

int main(void) {
    int height = 10;

    draw(height);
}