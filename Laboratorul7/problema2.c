#include <stdio.h>
#include <stdlib.h>
void count(int n, int *v, int *zero, int *poz, int *neg) {
    for (int i = 0; i < n; i++)
    {
        if(v[i]<0)
            (*neg)++;
        else
            if(v[i]>0)
            (*poz)++;
            else
                (*zero)++;
    }
}
int main()
<<<<<<< HEAD
{   int n,v[100],a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
    count(n,v,&a,&b,&c);
    printf("nule: %d\npozitive: %d\nnegative: %d",a,b,c);
=======
{
    printf("Hello world\n");
>>>>>>> main
    return 0;
}