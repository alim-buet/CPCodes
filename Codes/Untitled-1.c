#include <stdio.h>

int main()
{
    int T,i,j,sum;
    scanf("%d",&T);
    int N[T],ara1[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
        sum=(N[i]/10000)+N[i]%10;
        ara1[i]=sum;
    }
    for(i=0;i<T;i++)
    {
        printf("sum = %d\n",ara1[i]);
    }
    return 0;
}