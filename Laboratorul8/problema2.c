#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *v;
    int cap=5,n,y=1;
    v=malloc(cap*sizeof(int));
    while(y!=0)
    {
        scanf_s("%d",&y);
        if(y!=0)
        {
            v[n++]=y;
        }
        else
            break;
        if(n==cap)
        {
            cap++;
            v=realloc(v,cap*sizeof(int));
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
    return 0;
}