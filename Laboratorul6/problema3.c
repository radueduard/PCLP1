//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void f(int a[],int b[],int n, int m, int c[]);

int main()
{
    int n,m,a[100],b[100],c[100];
    scanf("%d",&n);
    if(n>1000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    if(m>1000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    f(a,b,n,m,c);
}

void f(int a[],int b[],int n, int m, int c[])
{
    int p=0;
    if(n>=m)
    {
        for(int i=0;i<n;i++)
        {
            int sw=0;
            for(int j=0;j<m && sw==0;j++)
            {
                if(a[i]==b[j])
                {
                    c[p]=a[i];
                    p++;
                    sw=1;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            int sw=0;
            for(int j=0;j<n && sw==0;j++)
            {
                if(b[i]==a[j])
                {
                    c[p]=b[i];
                    p++;
                    sw=1;
                }
            }
        }
    }
    printf("%d\n",p);
    for(int i=0;i<p;i++)
    printf("%d ",c[i]);
    printf("\n");
}