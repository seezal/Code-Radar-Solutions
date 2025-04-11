#include<stdio.h>
int main(){
    char ch;
    if((ch<'Z') && (ch>'A') ){
        printf("Uppercase");
    }
    else if((ch<'z') && (ch>'a')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}