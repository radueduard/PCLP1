//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

#include <stdio.h>
#include <math.h>
float dist(int x1, int y1, int x2, int y2);
int main() {
    int n;
	int px1,px2,py1,py2,x[1001],y[1001];
	float dmax=0;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
	dmax=dist(x[0],y[0],x[1],y[1]);
	px1=x[0];
	px2=x[1];
	py1=y[0];
	py2=y[1];
	int j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(dist(x[i],y[i],x[j],y[j])>dmax)
				{
					dmax=dist(x[i],y[i],x[j],y[j]);
					px1=x[i];
					px2=x[j];
					py1=y[i];
					py2=y[j];
				}
	printf("\n%d %d\n%d %d\n",px1,py1,px2,py2);
	printf("%lf",dmax);
    return 0;
}
float dist(int x1, int y1, int x2, int y2)
{
    return sqrtf(powf(x2-x1,2)+ powf(y2-y1,2));
}