#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
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