#include <stdio.h>

void count(int n, int * v, int * zero, int * poz, int * neg)
{
    for(int i = 0; i < n; i ++)
    {
        if(v[i] < 0) * neg = * neg + 1;
        else if(v[i] == 0) * zero = * zero + 1;
        else * poz = * poz + 1;
    }
}

int main()
{
    int n, v[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
        scanf("%d", &v[i]);
    int zero = 0, poz = 0, neg = 0;
    count(n, v, &zero, &poz, &neg);
    printf("nule: %d\npozitive: %d\nnegative: %d\n", zero, poz, neg);
    return 0;
}