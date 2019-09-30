#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    //argc - кількість запитів в командному рядку
    
    for(int i = 1; i < argc; i++) {
        for(int j = 0, n = strlen(argv[i]); j < n; j++) {
            printf("%c\n", argv[i][j]);
        }
    }
}