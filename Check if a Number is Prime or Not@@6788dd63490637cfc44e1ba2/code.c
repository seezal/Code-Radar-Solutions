#include<stdio.h>
int main(){
    int n,i;
    int isprime=1;
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    else{
        for (i=2;i<=sqrt(n);i+++){
            if (n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if (isprime==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}