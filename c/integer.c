#include <stdio.h>
#include <cs50.h>

int main(void) {
    int q = get_int("Integer: ");
    printf("%d\n", q);
    
    float w = get_float("Float: ");
    printf("Float: %.2f\n", w);
    
    // double d = get_double("Double: ");
    // printf("Double: %.50f\n", d);
}