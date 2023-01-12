#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Produs.h"

int main(int argc, char **argv)
{
  Produs prod;
  strcpy(prod.nume_produs, argv[1]);
  prod.cantitate = atoi(argv[2]);
  prod.pret_produs = atof(argv[3]);
  printf("%s\n", prod.nume_produs);
  printf("%d\n%f\n", prod.cantitate, prod.pret_produs);
  return 0;
}