#include<stdio.h>
#include<math.h> // Make sure to include math.h for sqrt function

int main(){
    int n, i;
    int isprime = 1;
    
    scanf("%d", &n);
    
    if(n <= 1){
        isprime = 0; // Numbers less than or equal to 1 are not prime
    }
    else{
        for (i = 2; i <= sqrt(n); i++){ // Corrected increment operator here
            if (n % i == 0){
                isprime = 0; // If n is divisible by i, it's not prime
                break;
            }
        }
    }
    
    if (isprime == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}
