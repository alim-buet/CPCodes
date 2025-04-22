// printf(%02d,i) mane shob shokha 2 digit e hobe,, jader 2 ta digit nai tader age 0 hoeb

#include<stdio.h>
#include <windows.h>

int main() {
    for (int h = 0;h < 24;h++) {

        for (int m = 0; m < 60; m++)
        {

            for (int s = 0;s < 60; s++)
            {
                printf("%02d:%02d:%02d", h, m, s);
                Sleep(10);
                printf("\b\b\b\b\b\b\b\b");
            }
        }



    }

}