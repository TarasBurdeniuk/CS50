#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    long long card = get_long("number of card: ");
    int totalDigits = 0;
    long long cardDigit = card;
    
    while(cardDigit != 0) {
        cardDigit /= 10;
        totalDigits ++;
    }
    
    int i = 1;
    int sum = 0;
    int firstDigit = 0;
    
    while(card) {
        if((card == 34) || (card == 37) || (card == 51) || (card == 52) || (card == 53) || (card == 54) || (card == 55) || (card == 4)) {
            firstDigit = card;
        }
        if(i % 2 == 0) {
            int q = (card % 10) * 2;
            while(q) {
                sum += q % 10;
                q /= 10;
            }
        } else {
            sum += card % 10;
        }
        card /= 10;
        i += 1;
    }
    
    if((totalDigits == 16) && (sum % 10 == 0) && ((firstDigit == 51) || (firstDigit == 52) || (firstDigit == 53) || (firstDigit == 54) || (firstDigit == 55))) {
        printf("MASTERCARD\n");
    } else if((totalDigits == 15) && (sum % 10 == 0) && ((firstDigit == 34) || (firstDigit == 37))) {
        printf("AMEX\n");
    } else if(((totalDigits == 13) || (totalDigits == 16)) && (sum % 10 == 0) && (firstDigit == 4)) {
        printf("VISA\n");
    } else {
        printf("INVALID\n");
    }
    
    printf("firstDigit: %i\n", firstDigit);
    printf("sum: %i\n", sum);
    printf("totalDigits: %i\n", totalDigits);
}