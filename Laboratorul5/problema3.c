#include <stdio.h>
int prim(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    if(n%2==0) return 0;
    int d;
    for(d=3;d*d<=n;d++){
        if(n%d==0) return 0;
    }
    return 1;
}
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        int c1,c2;
        c1=prim(i);
        c2= prim(n-i);
        if(c1==1&&c2==1){
            printf("%d+%d\n",i,n-i);
        }
    }
    return 0;
}
