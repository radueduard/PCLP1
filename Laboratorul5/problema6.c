//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include<math.h>

float dist(int x1, int y1, int x2, int y2);

int main() 
{
	unsigned int n;
	int x[100],y[100],a=0,b=0,c=0,d=0;
	float max=0;
	scanf("%u",&n);
	for(int i=0;i<n;i++)
	scanf("%d%d",&x[i],&y[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		if(max<dist(x[i],y[i],x[j],y[j]))
		{
			max=dist(x[i],y[i],x[j],y[j]);
			a=x[i];
			b=y[i];
			c=x[j];
			d=y[j];
		}
	}
	printf("%d %d\n%d %d\n%f\n",a,b,c,d,max);
}

float dist(int x1, int y1, int x2, int y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}