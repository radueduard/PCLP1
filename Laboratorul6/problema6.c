//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void spirala (int a[][100], int m, int n, int v[]){
    int i,j,nr,k,d;
    k=0;
    d=0;
    while(d<n||d<m){
        for(i=d;i<=n-1;i++){
            v[k]=a[i][d];
            k++;
        }
        for(i=d+1;i<m;i++){
            v[k]=a[n-1][i];
            k++;
        }
        for(i=n-2;i>=d;i--){
            v[k]=a[i][m-1];
            k++;
        }
        for(i=m-2;i>=d+1;i--){
            v[k]=a[d][i];
            k++;
        }
        d++;
        n--;
        m--;

    }
}
void afisare(int v[],int dim){
    int i;
    for(i=0;i<dim;i++){
        printf("%d ",v[i]);
    }
}
int main()
{
    int A[100][100],i,j,n,m,v[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    spirala(A,m,n,v);
    afisare(v,n*m);

}