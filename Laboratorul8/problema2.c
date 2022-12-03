#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v,n,cap,x,i;
    cap=1;
    v=malloc(cap*sizeof(int));
    do{
        scanf("%d",&x);
        if(x!=0){
            v[cap-1]=x;
            cap++;
        }
    }while(x!=0);
    cap--;
    v=realloc(v,cap);
    for(i=0;i<cap;i++){
        printf("%d ",v[i]);
    }
    return 0;
}