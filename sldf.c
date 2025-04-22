#include <stdio.h>

#define min3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))

#define min4(a, b, c, d) ((d) < (min3(a, b, c))) ? (d) : (min3(a, b, c))

int main() {
    int x = min4(1, 2, 0, 4);
    printf("Minimum value: %d\n", x);
    return 0;
}
