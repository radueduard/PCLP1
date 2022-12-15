#include <stdio.h>
#include <math.h>
double integrala(double (*func) (double x), double a, double b, int n) {
double sum = 0, baza_mica, baza_mare;
double pas = (a - b) / n;
int i;
for (i = 1; i < n; i++) {
	baza_mica = pas * (i - 1);
	baza_mare = pas * i;
	sum += (func(baza_mica)+func(baza_mare)) * pas /2;
}
return sum;
}

int main() {
	printf("Integrala din sin(x) de la o la PI = %2.f\n"), integrala(sin, 0, M_PI, 100);
	printf("Intergala din cos(x) de la 0 la PI = %.2f\n"), integrala(cos, 0, M_PI, 100);
	
	return 0;
}