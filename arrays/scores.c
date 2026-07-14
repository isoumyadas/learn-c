#include <stdio.h>

float average(int length, int numbers[]);

int main(void){

    const int N = 3;

    int scores[N];
    scores[0] = 73;
    scores[1] = 24;
    scores[2] = 33;

    // printf("Average : %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int numbers[]) {
    
    int sum = 0;
    for(int i = 0; i < length; i++){
        // printf("%i\n", numbers[i]);
        sum += numbers[i];
    }

    return sum / (float) length;
}