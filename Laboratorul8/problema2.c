#include <stdio.h>
#include<stdlib.h>

int main(){
    int *v, cap=5,n=0;
    v=malloc(cap*sizeof(int));
    int x;
    scanf("%d",&x);
    while(x){        
        n++;
        if(n==cap){
            v=realloc(v,2*cap*sizeof(int));
            cap = 2*cap;
        }
        v[n]=x;
        scanf("%d",&x);
    }
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
}