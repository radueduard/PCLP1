//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include<stdio.h>
#include<math.h>

int factorial(int a) {
    int p = 1;
    for (int i = 1; i < a; i++)
        p = p * i;
    return p;
}

double putere(double a, int b) {
    double put;
    for (int i = 1; i < b; i++)
        put = pow(a, i);
    return put;
}

double taylor(double c, int d) {
    double e = 1;
    for (int i = 0; i < d; i++)
        e = e + putere(c, i) / factorial(i);
    return e;
}

int main() {
    double result, x;
    int n;
    scanf("%lf%d", &x, &n);
    result = taylor(x, n);
    printf("%lf", result);
    return 0;
}