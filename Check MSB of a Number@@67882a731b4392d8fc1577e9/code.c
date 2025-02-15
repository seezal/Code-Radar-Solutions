#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a & 0x80000000) {  // Correct usage of hexadecimal
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
