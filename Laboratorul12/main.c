#include "Produs.h"

void creare_fisier(char *nume_fisier) {
  int i = 0;
  Produs produse[PRODUCTS];
  for (i = 0; i < PRODUCTS; i++) {
    int x = rand();
    sprintf(produse[i].nume_produs, "%d", x);
    produse[i].cantitate = x % PRODUCTS;
    produse[i].pret_produs = (x <= PRODUCTS) ? x : (x % PRODUCTS);

    FILE *file = fopen(nume_fisier, "wb");
    fwrite(produse, sizeof(Produs), PRODUCTS, file);
    fclose(file);
  }
}

void afisare_ecran(char *nume_fisier) {
  int i;
  Produs produse[PRODUCTS];
  FILE *file = fopen(nume_fisier, "rb");

  fread(produse, sizeof(Produs), PRODUCTS, file);
  fclose(file);

  for (i = 0; i < PRODUCTS; i++) {
    printf("%s %d %lf\n", produse[i].nume_produs, produse[i].cantitate,
           produse[i].pret_produs);
  }
}

void sort(char *nume_fisier) {
  int i, j;
  Produs produse[PRODUCTS];
  FILE *file = fopen(nume_fisier, "rb+");
  fread(produse, sizeof(Produs), PRODUCTS, file);
  for (i = 0; i < PRODUCTS - 1; i++)
    for (j = 0; j < PRODUCTS - i - 1; j++)
      if (atoi(produse[j].nume_produs) > atoi(produse[j + 1].nume_produs)) {
        Produs temp = produse[j];
        produse[j] = produse[j + 1];
        produse[j + 1] = temp;
      }
  fseek(file, 0, SEEK_SET);
  fwrite(produse, sizeof(Produs), PRODUCTS, file);
  fclose(file);
}

int find(char *name_product, char *nume_fisier) {
  int i;
  Produs produse[PRODUCTS];
  FILE *file = fopen(nume_fisier, "rb");

  fread(produse, sizeof(Produs), PRODUCTS, file);
  fclose(file);

  for (i = 0; i < PRODUCTS; i++) {
    if (strcmp(produse[i].nume_produs, name_product) == 0) {
      printf("%s %d %lf\n", produse[i].nume_produs, produse[i].cantitate,
             produse[i].pret_produs);
      return i;
    }
  }
  printf("Produsul n-a fost gasit !\n");
  return -1;
}

void modify(char *name_product, char *nume_fisier) {
  int position = find(name_product, nume_fisier);
  if (position == -1)
    return;

  FILE *file = fopen(nume_fisier, "rb+");
  char newName[MAX_CHAR + 1];
  int newQuantity;
  double newPrice;
  scanf("%s %d %lf", newName, &newQuantity, &newPrice);
  Produs temp;
  strcpy(temp.nume_produs, newName);
  temp.cantitate = newQuantity;
  temp.pret_produs = newPrice;

  fseek(file, position * sizeof(Produs), SEEK_SET);
  fwrite(&temp, sizeof(Produs), 1, file);

  fclose(file);
}

int main(int argc, char **argv) {
  srand(time(NULL));
  char *nume_fisier = argv[1];

  creare_fisier(nume_fisier);
  sort(nume_fisier);
  afisare_ecran(nume_fisier);
  // find("2076372361", nume_fisier);
  // modify("2087790854", nume_fisier);
  return 0;
}
