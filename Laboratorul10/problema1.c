//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>

double integrala(double (*func) (double x), double a, double b, int n){
    double arie = 0;
    double punct1, punct2;
    for(int i = 0; i < n; i++){
        punct1 = ((a - b) / n) * (i - 1);
        punct2 = ((a - b) / n) * i;
        arie += (func(punct1) + func(punct2)) * ((a - b) / n) / 2;
    }
    return arie;
}

int main(){
    int n;
    double arie;
    scanf("%d", &n);
    arie = integrala(sin,0, M_PI, n);
    printf("%lf\n", arie);
    arie = integrala(cos, 0, M_PI, n);
    printf("%lf\n", arie);
    return 0;
}