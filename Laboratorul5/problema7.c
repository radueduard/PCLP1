//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int transforma(int n);

int main() 
{
	int N;
	scanf("%d",&N);
	if(N<0 || N>1000000000)
	{
		printf("Date invalid introduse.");
		return 0;
	}
	printf("%d\n",transforma(N));
}

int transforma(int n)
{
    int x=n,r=0,nr=0,y,v[100],t=0;
    while(x!=0)
    {
        if(x%10==0)
        r++;
        x/=10;
        nr++;
    }
    for(int i=0;i<=9;i++)
    v[i]=0;
    for(int i=0;i<=9;i++)
    {
        y=n;
        for(int j=0;j<nr;j++)
        {
            if(i==y%10)
            v[i]++;
            y/=10;
        }
    }
    if(r!=0)
    {
        for(int i=9;i>=0;i--)
        {
            while(v[i]!=0)
            {
                t=i+t*10;
                v[i]--;
            }
        }
    }
    else
    {
        for(int i=1;i<=9;i++)
        {
            while(v[i]!=0)
            {
                t=i+t*10;
                v[i]--;
            }
        }
    }
    return t;
}