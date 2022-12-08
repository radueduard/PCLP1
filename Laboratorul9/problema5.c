#include <stdio.h>
#include <stdlib.h>

typedef struct Complex {
    float real, imaginar;
}Complex;

Complex adunare(Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.imaginar = a.imaginar + b.imaginar;
    return c;
}

Complex scadere(Complex a, Complex b) {
    Complex c;
    c.real = a.real - b.real;
    c.imaginar = a.imaginar - b.imaginar;
    return c;
}

Complex inmultire(Complex a, Complex b) {
    Complex c;
    c.real = a.real * b.real - a.imaginar * b.imaginar;
    c.imaginar = a.real * b.imaginar + a.imaginar * b.real;
    return c;
}

Complex putere(Complex a, int putere) {
    Complex c;
    if(putere == 0) {
        c.real = 1;
        c.imaginar = 0;
        return c;
    }
    c.real = 1;
    c.imaginar = 1;
    for (int i = 0; i < putere; i++) {
        c.real *= a.real;
        c.imaginar *= c.imaginar;
    }
    return c;
}

void scrie(Complex a) {
    printf("(%f,%f)", a.real, a.imaginar);
}

int main()
{
    Complex x, *coef, polinom;
    int N;
    scanf("%f%f", &x.real, &x.imaginar);
    scanf("%d", &N); // gradul polinomului
    coef = (Complex*) malloc ((N + 1) * sizeof(Complex));

    for (int i = 0; i <= N; i++) {
        scanf("%f", &coef[i].real);
        coef[i].imaginar = 0.0f;
    }

    polinom.real = 0;
    polinom.imaginar = 0;
    Complex termen;
    for (int i = 0; i <= N; ++i) {
        termen = putere(x,i);
        polinom = inmultire(coef[i], termen);
    }

    scrie(polinom);

    free(coef);
    return 0;
}