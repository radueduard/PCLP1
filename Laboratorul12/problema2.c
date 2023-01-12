#include <stdio.h>
#include "Produs.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

void newBinar() {
    FILE* fisierBinar = fopen("data.in", "wb");
    Produs produsX;
    srand(time(NULL));
    int X = rand();
    strcpy(produsX.nume_produs, "Produs");
    produsX.cantitate = X % 100;
    produsX.pret_produs = X <= 100 ? X : X % 100;
    sprintf(fisierBinar, 100, "%s%s %d %f\n", produsX.nume_produs, X, produsX.cantitate, produsX.pret_produs);
}

int main() {
    newBinar();
	return 0;
}