//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float dist(int x1, int y1, int x2, int y2){
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main() {

	int n,a[2][100],i,j,p1,p2;
	float l,lmax=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d %d", &a[0][i], &a[1][i]);
		
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			l=dist(a[0][i],a[1][i],a[0][j],a[1][j]);
			if(l>lmax){
				lmax=l;
				p1=i;
				p2=j;
		}
	}

	printf("%d %d\n",a[0][p1],a[1][p1]);
	printf("%d %d\n",a[0][p2],a[1][p2]);
	printf("%f\n",lmax);

	return 0;
}