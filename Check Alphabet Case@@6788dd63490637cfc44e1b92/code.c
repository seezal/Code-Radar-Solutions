#include<stdio.h>
int main(){
    char alphabet;
    scanf("%c",&alphabet);
    if((alphabet>='A') && (alphabet<='Z')){
        printf("Uppercasee");
    }
    else{
        printf("Lowercase");
    }
}