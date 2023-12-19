#include <stdio.h>
#include <math.h>
char* checkIfPrime(int t) {
    for(int i = 2; i <= t/2; i++) {
        if(t % i == 0) {
            return "not a prime";
        }
    } 
    return "a prime";
}
int main() {
    double n;
    printf("Please enter the number:");
    scanf("%lf",&n);
    printf("Sample Change");
    if(ceil(n) == floor(n)) printf("The given number is %s \n", checkIfPrime(n));
    else printf("\n Given number is a decimal");
    return 0;

}