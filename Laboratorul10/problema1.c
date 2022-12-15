//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>


double integrala(double (*func) (double x), double a, double b, int n){
    double div = (double)(b - a) / n, trapez, arie = 0;
    for (int i = 0; i < n; i++) {
        trapez = (func(a + i * div) + func(a + (i + 1) * div)) * div / 2.0;
        arie += trapez;
    }
    return arie;
}

int main() {
    double a, b;
    int n;
    scanf("%lf%lf%d", &a, &b, &n);
    printf("%lf", integrala(sin, 0, M_PI, 100));
	return 0;
}