//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmdc(int a, int b){
	if(a==b)
		return a;
	if(a>b)
		a -= b;
	else
		b -=a;
	return cmmdc(a,b);
}

int cmmmc(int a, int b){
	return (a*b)/cmmdc(a,b);
}

int main() {
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int a=cmmmc(y1,y2);
	x1 = a/y1;
	x2 = a/y2;
	y1=y2=a;
	 
	printf("%d %d \n",x1,y1);
	printf("%d %d \n",x2,y2);

	return 0;
}