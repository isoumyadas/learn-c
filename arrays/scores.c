#include <stdio.h>

int main(void){

    const int N = 3;

    int scores[N];
    scores[0] = 73;
    scores[1] = 74;
    scores[2] = 33;

    printf("Average : %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}