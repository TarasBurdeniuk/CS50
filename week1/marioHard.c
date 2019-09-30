#include <stdio.h>
#include <cs50.h>

int main(void) {
    int num = get_int("Height: ");
    
    while(num < 1 || num > 8) {
        num = get_int("Height: ");
    }

    for (int i = 1; i <= num; i++) {
        for(int j = i; j < num; j++) {
            printf(" ");
        }
        for(int a = 0; a < i; a++) {
            printf("#");
        }
        for(int d = 0; d < 2; d++) {
            printf(" ");
        }
        for(int s = 0; s < i; s++) {
            printf("#");
        }
        printf("\n");
    }
}