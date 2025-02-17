#include<stdio.h>
int main(){
    int sp,cp,loss;
    scanf("%d%d",&sp,&cp);
   
    loss=cp-sp;
    if(sp>cp && sp-cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss %d\n",loss);
    }
    else{
        printf("No Profit No Loss\n");
    }
}