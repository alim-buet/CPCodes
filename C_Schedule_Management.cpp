#include <stdio.h>

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;
    printf("enter values for n and r: ");

    scanf("%d %d", &n, &r);
    if (n < r) {
        printf("Invalid input\n");
    }
    else {
        int result = nCr(n, r);
        printf("%d\n", result);

    }
    return 0;
}
