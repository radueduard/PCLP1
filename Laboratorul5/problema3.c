#include <stdio.h>

int prim(int n)
{
    int d;
    if(n%2==0 && n!=2)
        return 0;
    for(d=3; d<=n/2; d=d+2)
        {
            if(n%d==0)
                return 0;
        }
    return 1;
}

int main()
{
    int N, i, j;
    scanf("%d", &N);
    for(i=1; i<=N/2; i++)
    {
        j=N-i;
        if(prim(i)==1 && prim(j)==1)
            printf("%d + %d\n",i,j);
    }
}