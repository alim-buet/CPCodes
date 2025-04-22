#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int co = 1;
    // for (int r = 0; r < n; r++)
    // {
    //     //spaces
    //     for (int sp = 0;sp <= n - r; sp++) {
    //         printf(" ");
    //     }
    //     for (int m = 0;m <= r; m++) {
    //         if (m == 0 || r == 0) co = 1;
    //         else {
    //             co = co * (r - m + 1) / m;
    //         }
    //         printf("%d ", co);
    //     }
    //     printf("\n");

    // }

    for (int r = 0;r <= n;r++) {
        for (int spaces = 1;spaces <= n - r;spaces++) printf(" ");
        for (int k = 0;k <= (r);k++) {
            if (k == 0 || k == r) co = 1;
            else co = co * (r - k + 1) / (k);
            printf("%d ", co);


        }
        printf("\n");
    }

    return 0;
}