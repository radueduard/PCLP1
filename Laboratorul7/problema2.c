#include <stdio.h>

void count (int n, int *v, int *zero, int *poz, int *neg)
{
    for (int i=1; i<=n; i++)
    {
        if (v[i]==0)
            *zero++;
        if (v[i]>0)
            *poz++;
        if (v[i]<0)
            *neg++;
    }
}

int main()
{
    int n, *v[101], *zero=0, *poz=0, *neg=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
        scanf("%d",&v[i]);
    count(n,*v,*zero,*poz,*neg);
    printf("nule: %d\npozitive: %d\nnegative: %d",zero,poz,neg);
    return 0;
}