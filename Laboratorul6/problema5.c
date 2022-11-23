//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void transform(int v[],int n,int x){
    for(int i=0;i<n;i++)
        if(v[i]<x){
            int aux=v[i];
            for(int j=i;j>0;j--)
                v[j]=v[j-1];
            v[0]=aux;
        }
}

int main()
{
    int n,x,v[100];
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
    transform(v,n,x);

    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");

    return 0;
}