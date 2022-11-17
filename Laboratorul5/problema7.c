//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int verf(int n){
    while(n){
        if(n%10==0) return 0;
        n=n/10;
    }
    return 1;
}
int transforma(int n){
    int v[10]={0},i,j,c,cn=n;
    while(cn){
        v[cn%10]++;
        cn=cn/10;
    }
    c= verf(n);
    if(c==0){
        for(i=9;i>=0;i--){
            while(v[i]){
                printf("%d",i);
                v[i]--;
            }
        }
    }
    else{
        for(i=0;i<=9;i++){
            while(v[i]){
                printf("%d",i);
                v[i]--;
            }
        }
    }
    return 1;
}
int main() {
    int n,c;
    scanf("%d",&n);
    if(n==0) {
        printf("%d",n);
    }
    else{
        c= transforma(n);
        printf("%d",c);
    }

}