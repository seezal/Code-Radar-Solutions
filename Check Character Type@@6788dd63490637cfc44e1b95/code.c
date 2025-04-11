#include<stdio.h>
int main(){
    char ch;
    int a;
    scanf("%c%d",&ch,&a);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else if(ch!='a' || ch!='e' || ch!='i' || ch!='o' || ch!='u' ||ch!='A' || ch!='E' || ch!='I' || ch!='O' || ch!='U'){
        printf("Consonant");
    }
    else if(a<='9' && a>='0'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}