//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void swap(int *x,int *y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
void sort(int v[], int n){
    int ok,i;
    do{
        ok=1;
        for(i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ok=0;
                swap(&v[i],&v[i+1]);
            }
        }
    }while(ok==0);

}
int main()
{
    int n,v[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    sort(v,n);
    for(i=0;i<n;i++) {
        printf("%d  ", v[i]);
    }
}