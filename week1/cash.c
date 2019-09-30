#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float number = get_float("Number: ");
    
    while(number <= 0) {
        number = get_float("Number: ");
    }
    
    int coins = round(number * 100);
    printf("%i\n", coins);
    
    int change_owed = 0, qurter = 0, dime = 0, nickel = 0, penny = 0;
    
    while(coins >= 25) {
        coins = coins - 25;
        change_owed += 1;
        qurter += 1;
    }
    while(coins >= 10) {
        coins = coins - 10;
        change_owed += 1;
        dime += 1;
    }
    while(coins >= 5) {
        coins = coins - 5;
        change_owed += 1;
        nickel += 1;
    }
    while(coins >= 1) {
        coins = coins - 1;
        change_owed += 1;
        penny += 1;
    }
    
    printf("change_owed: %i\n", change_owed);
    printf("coins: %i\n", coins);
    printf("qurter: %i\n", qurter);
    printf("dime: %i\n", dime);
    printf("nickel: %i\n", nickel);
    printf("penny: %i\n", penny);
}