#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    int b;
    scanf("%s%d",&a,&b);
    printf("Hexadecimal \n: %s",a);
    printf("Octal: %d",b);
}