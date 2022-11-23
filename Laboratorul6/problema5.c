//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
int aux;
void transform(int v[], int n, int x){
    int a[100],i,j=0;
    for(i=0;i<n;i++){
        if(v[i]<x){
            a[j]=v[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(v[i]>=x){
            a[j]=v[i];
            j++;
        }    }
        for(i=0;i<n;i++){
            v[i]=a[i];
        }


}
  
int main(){
    int v[100],n,i,x;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    transform(v,n,x);
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
}
    
        

         

        

