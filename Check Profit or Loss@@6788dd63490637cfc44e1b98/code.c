#include<stdio.h>
int main(){
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp){
        printf("Profit%d",sp-cp);
    }
    else if(cp>sp){
        printf("Loss%d",cp-sp);
    }
    else{
        printf("No Profit No Loss");
    }
}