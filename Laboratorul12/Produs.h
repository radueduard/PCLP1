#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHAR 20
#define PRODUCTS 100

typedef struct Produs {
  char nume_produs[MAX_CHAR + 1];
  int cantitate;
  double pret_produs;

} Produs;

void creare_fisier(char *nume_fisier);
void afisare_ecran(char *nume_fisier);
void sort(char *nume_fisier);
int find(char *name_product, char *nume_fisier);
void modify(char *name_product, char *nume_fisier);
