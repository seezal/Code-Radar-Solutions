#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a,&b);
    printf("Hexadecimal %d",a);
    printf("Octal %d",b);
}