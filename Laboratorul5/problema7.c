
#include <stdio.h>
int transforma(int n)
{
    int m=0,v[20],x=0;
    while(n!=0)
    {
        v[m++]=n%10;
        n/=10;
    }
    int i=0,OK=0;
    while(i<m&&OK==0)
    {
        if(v[i]==0)
            OK=1;
        i++;
    }
    if(OK)
    {
        do {
            OK=1;
            for(int j=0;j<m-1;j++)
            {
                if(v[j]<v[j+1])
                {
                    OK=0;
                    v[j]=v[j]+v[j+1];
                    v[j+1]=v[j]-v[j+1];
                    v[j]=v[j]-v[j+1];
                }
            }
        }while(OK==0);
        for(int j=0;j<m;j++)
            printf("%d",v[j]);
    }
    else
    {
        do {
            OK=1;
            for(int j=0;j<m-1;j++)
            {
                if(v[j]>v[j+1])
                {
                    OK=0;
                    v[j]=v[j]+v[j+1];
                    v[j+1]=v[j]-v[j+1];
                    v[j]=v[j]-v[j+1];
                }
            }
        }while(OK==0);
        for(int j=0;j<m;j++)
            x=x*10+v[j];
        return x;
    }
}

int main() {
	int n;
    scanf("%d",&n);
    printf("%d", transforma(n));
	return 0;
}