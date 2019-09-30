#include <stdio.h>
#include <cs50.h>

int add_int (int a, int b);

int main(void) {
    int x = get_int("Give me an integer 1:");

    int y = get_int("Give me an integer 2:");

    int z = add_int (x, y);

    printf("The sum of %i and %i is %i!\n", x, y ,z);

}

int add_int (int a, int b) {
    return a + b;
}