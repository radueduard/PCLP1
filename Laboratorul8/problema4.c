#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *vim,*vi,n,k;
    scanf_s("%d %d",&n,&k);
    vim=(int *)malloc(n*sizeof(int));
    vi=(int *)malloc(n*sizeof(int));
    for(int i=0;i<25;i++)
        vim[i]=vi[i]=0;
    vim[0]=1;
    vim[1]=1;
    int i=2;
    while(i<=n)
    {
        vi[0]=vi[i]=1;
        for(int p=1;p<i;p++)
        {
            vi[p]=vim[p-1]+vim[p];
        }
        for(int j=0;j<=i;j++)
            vim[j]=vi[j];
        i++;
    }
    printf("%d",vim[k]);
    free(vim);
    free(vi);
    return 0;
}