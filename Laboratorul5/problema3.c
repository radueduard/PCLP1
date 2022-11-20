#include <stdio.h>
int prim(int n)
{
    int OK=1,i;
    if(n==1)OK=1;
    else
    if(n==2)OK=1;
    else
    if(n%2==0)OK=0;
    else
    {
        i=3;
        while(i*i<=n&&OK==1)
        {
            if(n%i==0)
                OK=0;
            i+=2;
        }
    }
    if(OK)
        return 1;
    else
        return 0;
}
int main() {
	int n;
    scanf("%d",&n);
    int i=1,j=n-1;
    while(i<=j)
    {
        if(prim(i)&&prim(j))
        {
                printf("%d + %d\n ",i,j);
        }
        i++;j--;
    }
    return 0;
}