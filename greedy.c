#include <stdio.h>
#include <cs50.h>
#include <math.h>

int change(int cents);
int main(void) {
    float input;

    do {
        printf("How much change is owed? \n");
        input = get_float();
       }  while (input <= 0);
    if (input < 0) {
        printf("Try again:\n");
    }
    printf("%d\n", change( (int)(round(input * 100) ) ) );
}

int change(int cents) {

return cents/25 + (cents%25)/10 + ((cents%25)%10)/5 + ((cents%25)%10)%5;
}
