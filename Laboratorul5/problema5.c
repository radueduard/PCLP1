//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int factorial(int);

double putere(double, int);

double Taylor(double, int);

int main() {
    double x;
    int n;
    scanf("%lf%d", &x, &n);
    printf("%.4lf", Taylor(x, n));
    return 0;
}

int factorial(int n) {
    int p = 1, i;
    for (i = 1; i <= n; i++)
        p *= i;
    return p;
}

double putere(double x, int n) {
    double p = 1;
    int i;
    for (i = 1; i <= n; i++)
        p *= x;
    return p;
}

double Taylor(double x, int n) {
    double ex = 1;
    int i;
    for (i = 1; i <= n; i++)
        ex += putere(x, i) / factorial(i);
    return ex;


}