#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    string s = get_string("Your name: ");
    
    for(int i = 0; i < strlen(s); i += 1) {
        int c = (int) s[i];
        printf("%c %i\n", s[i], c);
    }
    
    // int n = 0;
    
    // while(s[n] != '\0') {
    //     n += 1;
    // }
    
    // printf("%i\n", n);
    
}