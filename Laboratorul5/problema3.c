//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
int prim(int n)
{    
	if(n==1) return 1;
	int d;
	for(d=2;d<=n/2;d++)
	   if(n%d==0)
	       return 0;
	return 1;
}


int main() {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for(int i=1;i<=N/2;i++)
	    if(prim(i)==1 && prim(N-i)==1)
		      printf("%d + %d \n",i,N-i);

	return 0;
}