#include <stdio.h>

int main() {
    int n, base;
    scanf("%d %d", &n, &base);

    int maxpow = 0;
    int temp = n;

    
    while (temp > 0 && temp >= base) {
        temp /= base;
        maxpow++;
    }

    temp = n;  

    for (int i = maxpow; i >= 0; i--) {
        int power = 1;

        for (int j = 0; j < i; j++) {
            power *= base;
        }

        int digit = temp / power;  
        temp %= power;             

        if (digit <= 9) {
            printf("%d", digit);
        }
        else {
            printf("%c", 'A' + digit - 10);
        }
    }

    return 0;
}
