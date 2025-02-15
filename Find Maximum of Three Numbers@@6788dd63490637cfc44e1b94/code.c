#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if((a<c) && (b<c)){
        printf("%d",c);
    }
    else if((a>c) && (a>b)){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}