#include<stdio.h>
int main(){
    char ch;
    if((ch>='A')&&(ch<='Z') ){
        printf("Uppercase");
    }
    else if((ch<='z') && (ch>='a')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}