#include <stdio.h>
#include <string.h>

typedef struct complex{
    float re, im;
}complex;

complex adunare(complex a, complex b){
    complex z;
    z.re = a.re + b.re;
    z.im = a.im + b.im;
    return z;
}

complex adunare(complex a, complex b){
    complex z;
    z.re = a.re - b.re;
    z.im = a.im - b.im;
    return z;
}

complex inmultire(complex a, complex b){
    complex z;
    z.re = a.re * b.re - a.im * b.im;
    z.im = a.im * b.re + a.re * b.im;
    return z;
}

complex putere(complex a, int putere){
    complex z;
    z.re = 1;
    z.im = 0;
    for (int i = 0; i < putere; i++)
        z = inmultire(z, a);
    return z;
}

void scrie(complex a){
    printf("%f, %f", a.re, a.im);
}

int main()
{
    int grad;
    complex z, x, p;
    float c[100];
    scanf("%d", &grad);
    for(int i = 0; i < grad; i++){
        scanf("%f", &c[i]);
    }
    scanf("%f", &x.re);
    scanf("%f", &x.im);
    p.re = 0;
    p.im = 0;
    for(int i = 0; i <= n; i++){
       z.im = 0;
       z.re = c[i];
       p = adunare(p, inmultire(z, putere(x, i)));
    }
    scrie(p);
    return 0;
}