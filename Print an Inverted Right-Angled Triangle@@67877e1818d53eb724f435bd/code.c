#include<stdio.h>
int main(){
    int N, i, j;
    for (i=N; i>=1; i--){
        for (j=1; j<=i; j++){
        printf(" *");
        }
    printf("\n");
    }
}