#include <stdio.h>
#include "Produs.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    Produs produs;
    strcpy(produs.nume_produs, argv[1]);
    produs.cantitate = atoi(argv[2]);
    produs.pret_produs = atof(argv[3]);

    printf("%s %d %lf", produs.nume_produs, produs.cantitate, produs.pret_produs);
	return 0;
}