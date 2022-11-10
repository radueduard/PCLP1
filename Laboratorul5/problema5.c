//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int factorial(int n)
{
    if(n == 1) return 1;
    else return factorial(n - 1) * n;
}

double putere(double x, int n)
{
    if(n == 0) return 1;
    if(n == 1) return x;
    else return putere(x, n - 1) * x;
}

double taylor(double x, int n)
{
    if(n == 0) return 1;
    else return taylor(x, n - 1) + putere(x, n) / factorial(n);
}

int main() {
    int n;
    double x;
    scanf("%lf%d", &x, &n);
    printf("%0.4lf\n", taylor(x, n));
    return 0;
}