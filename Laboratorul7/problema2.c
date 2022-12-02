#include <stdio.h>

void count( int n, int *v, int *zero, int *poz, int *neg){
    for(int i=0;i<n;i++)
        if(v[i]==0)
            (*zero)++;
        else if(v[i]>0)
            (*poz)++;
        else
            (*neg)++;
}

int main()
{

    int n,v[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    int zero=0,poz=0,neg=0;
    count(n,v,&zero,&poz,&neg);
    printf("nule: %d \n pozitive: %d \n negative: %d \n",zero,poz,neg);

    return 0;
}