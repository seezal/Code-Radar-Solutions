#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(2*(num/2)==num){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}