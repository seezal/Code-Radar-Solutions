#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char character;
    scanf("%c",&character);
    printf("You entered:", character);
    return 0;
}