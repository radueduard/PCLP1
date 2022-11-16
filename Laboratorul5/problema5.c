//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
 
long factorial(int n) {
    long s = 1;
    if(n <= 1)
        return s;
    else
        for(int i = 2; i <= n; i++)
            s *= i;
    return s;
}
 
double putere(double x, int n) {
    if(n == 0) return 1;
    double pow = 1;
    for(int i = 1; i <= n; i++)
        pow *= x;
    return pow;
}
 
double taylor(double x, int n) {
    double s = 0;
    for (int i = 0; i <= n; i++)
        s += putere(x, i) / factorial(i);
    return s;
}
 
int main() {
    double X;
    int N;
    scanf("%lf%d", &X, &N);
    printf("%.4lf\n", taylor(X, N));
	return 0;
}
