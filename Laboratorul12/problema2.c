#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Produs.h"
#define pret(x) ((x <= 100) ? (x) : (x % 100))

void creare_fisier(char *nume_fisier)
{
  FILE *f;
  Produs prod;
  f = fopen(nume_fisier, "wb");
  for(int i = 0; i < 100; i++)
  {
    char nume[20];
    strcpy("Produs", nume);
    int x = rand();
    char num[5];
    sprintf(num, "%d", x);
    strcat(nume, num);
    strcpy(prod.nume_produs, nume);
    prod.cantitate = x % 100;
    prod.pret_produs = (float)pret(x);
    fwrite(&prod, sizeof(Produs), 1, f);
  }
  fclose(f);
}
int main(int argc, char **argv)
{
  char nume_fisier[10];
  strcpy(nume_fisier, argv[1]);
  creare_fisier(nume_fisier);
  return 0;
}