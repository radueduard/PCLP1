//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int factorial(int n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
}

double putere(double x, int n){
	if(n==0)
		return 1;
	return x*putere(x,n-1);
}

double taylor(double x, int n){
	if(n == 0)
		return 1;
	return putere(x,n)/factorial(n) + taylor(x,n-1);
}

int main() {

	float x;
	int n;
	scanf("%f %d",&x,&n);
	float expresie=taylor(x,n);
	printf("%0.4f",expresie);

	return 0;
}