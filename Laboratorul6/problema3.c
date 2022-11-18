//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
int search(int v[],int x,int n){
    int i;
    for(i=0;i<n;i++){
        if(v[i]==x){
            return 1;
        }
    }
    return 0;
}
int ex(int a[],int n,int b[],int m,int c[]){
    int i,j=0;
    for(i=0;i<n;i++){
        if(search(b,a[i],m)==1) {
            c[j]=a[i];
            j++;
        }
    }
    return j;
}
int main()
{
    int a[1000],b[1000],c[1000],i,j,nr,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    nr= ex(a,n,b,m,c);
    for(i=0;i<nr;i++){
        printf("%d ",c[i]);
    }
    return 0;
}