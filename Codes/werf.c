#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN constants

int main(int argc, char* argv[]) {
    int max = INT_MIN; // Initialize max with the minimum possible integer value
    int min = INT_MAX; // Initialize min with the maximum possible integer value

    if (argc < 2) {
        printf("Usage: %s <number1> <number2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}