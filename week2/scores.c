#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void chart(int count, int scores[]);

int main(void) {
    
    int scores[3];
    
    for(int i = 0; i < COUNT; i++) {
        scores[i] = get_int("score %i: ", i + 1);
    }
    
    chart(COUNT, scores);
}

void chart(int count, int scores[]) {
    for(int i = 0; i < count; i += 1) {
        for(int j = 0; j < scores[i]; j += 1) {
            printf("#");            
        }
        printf("\n");
    }

}