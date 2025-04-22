#include <stdio.h>
int main()
{
    int length = 5, width = 3;
    int area = length * width;
    printf("length width: ");
    printf("%i %i\n", length, width);
    printf("area: %i\n", area);
    printf("new length width: ");
    scanf("%i%i", &length, &width);
    area = length * width;
    printf("new area: %i\n", area);
    return 0;
}
