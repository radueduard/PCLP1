#include <stdio.h>
#include "Produs.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    Produs produs;
    strcpy(produs.nume_produs, argv[1]);
    produs.cantitate = atoi(argv[2]);
    produs.pret_produs = atof(argv[3]);
    printf("%s\n%d\n%f\n", produs.nume_produs, produs.cantitate, produs.pret_produs);
	return 0;
}