//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n);

int main()
{
    int N,a=0;
    scanf("%d",&N);
    if(N<2 || N>200000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    for(int i=1;i<N/2;i++)
    {
        if(prim(i)==1)
        {
            a=N-i;
            if(prim(a)==1)
            printf("%d + %d\n",i,a);
        }
    }

}

int prim(int n)
{
    int r=0;
    if (n==1)
    return 1;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        r++;
    }
    if(r==1)
    return 1;
    else
    return 0;
}