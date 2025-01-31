#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int letter[1];
    scanf("%s",&letter);
    printf("You entered: %s",letter);
    return 0;
}