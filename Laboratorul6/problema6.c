//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void spirala( int A[][100], int m, int n, int V[]){
    int i,j,nr,k=0,d=0;
    while(d<n || d<m){
        for(i=d;i<=n-1;i++)
            V[k++]=A[i][d];
        for(i=d+1;i<m;i++)
            V[k++]=A[n-1][i];
        for(i=n-2;i>=d;i--)
            V[k++]=A[i][m-1];
        for(i=m-2;i>=d+1;i--)
            V[k++]=A[d][i];
        d++;
        n--;
        m--;
    }
}

void afisare(int V[],int dim){
    for(int i=0;i<dim;i++)
        printf("%d ",V[i]);
    printf("\n");
}

int main()
{
    int a[100][100],i,j,n,m,v[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    
    spirala(a,m,n,v);
    afisare(v,n*m);
}