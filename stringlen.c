#include<stdio.h>
int main()
{
    char name[50];
    scanf("%s", name);
    //print the length of the name
    int len = 0;
    //bangladesh -> b,a,n,g,l,a,d,e,s,h,'/0',.....
    for (int i = 0;name[i] != '\0';i++) {
        len++;
    }
    printf("Len of string is %d", len);

    return 0;
}