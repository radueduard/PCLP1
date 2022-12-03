//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
void swap(int *x,int *y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
void transforma(int v[],int n,int x){
    int a[100],i,j;
    j=0;
    for(i=0;i<n;i++) {
        if (v[i] < x) {
            a[j] = v[i];
            j++;
        }
    }
        for(i=0;i<n;i++) {
            if (v[i] >= x) {
                a[j] = v[i];
                j++;
            }
        }
        for(i=0;i<n;i++){
            v[i]=a[i];
        }
}
=======
#include<stdio.h>

>>>>>>> main
int main()
{
    int v[100],n,i,x;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&vgi[i]);
    }
    transforma(v,n,x);
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    return 0;
}