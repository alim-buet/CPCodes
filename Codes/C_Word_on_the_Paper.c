#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    printf("%d", t);
    while (t--)
    {
        char grid[8][8];
        char word[8];
        int ind = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf("%c", &grid[i][j]);
                printf("%c", grid[i][j]);
                if (grid[i][j] != '.') {
                    word[ind] = grid[i][j];
                    printf(" found %c \n", word[ind]);
                    ind++;



                }
            }

        }
        for (int i = 0; i < 8; i++)
        {
            printf("%c", word[i]);
        }
        printf("\n");



    }


}