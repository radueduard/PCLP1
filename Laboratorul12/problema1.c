#include <stdio.h>
#include "Produs.h"

int main(int argc, char *argv[])
{
    Produs produs;
    sscanf(argv[1], "%s", produs.nume_produs);
    sscanf(argv[2], "%d", &produs.cantitate);
    sscanf(argv[3], "%f", &produs.pret_produs);

    printf("Produsul %s, cantitatea %d, pretul %.2f\n", produs.nume_produs, produs.cantitate, produs.pret_produs);
    return 0;
}