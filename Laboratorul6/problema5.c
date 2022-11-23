#include <stdio.h>

void transform (int v[], int n, int x)
{
    int u[100]={0};
    for (int i=1; i<=n; i++)
        u[v[i]]++;
    int k=1;
    for (int i=1; i<=100; i++)
        if (u[i]!=0)
            while (u[i]!=0)
            {
                v[k]=i;
                u[i]--;
                k++;
            }
}

int main ()
{
    int v[101], n, x;
    scanf("%d%d",&n,&x);
    for (int i=1; i<=n; i++)
        scanf("%d",&v[i]);
    
    transform(v,n,x);
    for (int i=1; i<=n; i++)
        printf("%d ",v[i]);
    return 0;
}