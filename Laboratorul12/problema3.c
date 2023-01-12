#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Produs.h"

void aifsare_ecran(char *nume_fisier)
{
  FILE *f;
  Produs prod;
  f=fopen(nume_fisier, "rb");
  while(fread(&prod, sizeof(prod), 1, f) == 1)
    printf("%s\n%d\n%f\n", prod.nume_produs, prod.cantitate, prod.pret_produs);
  fclose(f);
}
int main(int argc, char **argv)
{
  char nume_fisier[10];
  strcpy(nume_fisier, argv[1]);
  aifsare_ecran(nume_fisier);
  return 0;
}