#include <stdio.h>

int main()
{
    int n, v[10001]={0};
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
        scanf("%d",&v[i]);
    int k=0;
    while (k==0)
    {
        k=1;
        for (int i=1; i<n; i++)
            if (v[i]>v[i+1])
            {
                int x=v[i];
                v[i]=v[i+1];
                v[i+1]=x;
                k=0;
            }
    }
    for (int i=1; i<=n; i++)
        printf("%d ",v[i]);
    return 0;
}