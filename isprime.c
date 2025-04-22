#include<stdio.h>
#include<stdbool.h>


bool isPrime(long long int n) {
    // Handle special cases for n <= 1
    if (n <= 1) {
        return false;
    }

    // Handle small prime numbers explicitly
    if (n <= 3) {
        return true;
    }

    // If n is divisible by 2 or 3, it's not prime
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    // Use 6k +/- 1 rule for optimization
    for (long long int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
int main() {
    long long int n = 999966000289;
    if (isPrime(n)) {
        printf("it is a prime\n");
    }
    else {
        printf("Composite");
    }
}






