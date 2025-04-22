#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, ara[n], sum1 = 0, sum2 = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0;i < n;i++)
    {
        sum1 += (100 - ara[i]);
        sum2 += ara[i];
    }
    double percent = (double) 100 * sum2 / (sum1 + sum2);
    printf("%.12lf\n", percent);
    return 0;
}