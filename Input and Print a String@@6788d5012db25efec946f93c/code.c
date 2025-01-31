#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char letter[2];
    scanf("%s",&letter);
    printf("You entered: %s",letter);
    return 0;
}