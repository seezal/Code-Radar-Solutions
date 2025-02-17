#include<stdio.h>
int main(){
    int sp,cp,profit,loss;
    scanf("%d%d",&sp,&cp);
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp){
        printf("Profit",profit);
    }
    else if(cp>sp){
        printf("Loss",loss);
    }
    else{
        printf("No Profit No Loss");
    }
}