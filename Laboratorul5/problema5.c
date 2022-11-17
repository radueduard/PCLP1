//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
double putere(double x, int n){
	int i;
	double s=1;
	for(i=1;i<=n;i++){
		s=s*x;
	}
	return s;
}

double factorial(int n){
	int i,p=1;
	for(i=1;i<=n;i++)
	    p=p*i;
	  return p;
}
double taylor(double x,int n){
	int i;
	double s=1;
	for(i=1;i<=n;i++){
		s=s+putere(x,i)/factorial(i);
	}
	return s;
}


int main() {
	int n;
	double x;
	scanf("%lf%d",&x,&n);
	double c;
	c=taylor(x,n);
	printf("%lf",c);
	return 0;
}