//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>

double putere(double x, int n){
	int i;
	double s=1;
	for(i=1;i<=n;i++){
		s=s*x;
	}
	return s;
}


float dist( int x1, int y1, int x2, int y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y2));
	
}
int main() {
	int v[100][2],n,m,mm,i,j,p,q;
	double max,d;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &v[i][0], &v[i][1]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(i==0 && j==i+1){
				 max=dist(v[i][0],v[i][1],v[j][0],v[j][1]);
                p=i;
                q=j;
            }
            if (dist(v[i][0],v[i][1],v[j][0],v[j][1])>maxi){
                maxi=dist(v[i][0],v[i][1],v[j][0],v[j][1]);
                p=i;
                q=j;
            }
        }
    }
    printf("%d %d\n%d %d\n%lf",v[p][0],v[p][1],v[q][0],v[q][1],maxi);

    return 0;
}