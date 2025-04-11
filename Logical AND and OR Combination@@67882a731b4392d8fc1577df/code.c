#include <stdio.h>
int main(){
    int a,b,d;
    scanf("%d%d",&a,&b);
    d=a=b;
    if(a>0 && b<0 || d==0){
        printf("True");
    }
    else{
        printf("False");
    }
}
    