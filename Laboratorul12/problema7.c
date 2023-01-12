#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 4

typedef struct Persoana {
  char *nume;
  char *prenume;
} Persoana;

void serializeaza(Persoana v[], int nrPersoane, char *fileName) {
  int i;
  FILE *f = fopen(fileName, "wb");

  for (i = 0; i < nrPersoane; i++) {
    int numeLength = strlen(v[i].nume);
    int prenumeLength = strlen(v[i].prenume);
    fwrite(&v[i], sizeof(Persoana), 1, f);
    fwrite(&numeLength, sizeof(int), 1, f);
    fwrite(v[i].nume, sizeof(char) * strlen(v[i].nume), 1, f);
    fwrite(&prenumeLength, sizeof(int), 1, f);
    fwrite(v[i].prenume, sizeof(char) * strlen(v[i].prenume), 1, f);
  }

  fclose(f);
}

void deserializeaza(Persoana v[], int nrPersoane, char *fileName) {
  int i;
  FILE *f = fopen(fileName, "rb");

  for (i = 0; i < nrPersoane; i++) {
    int numeLength, prenumeLength;
    fread(&v[i], sizeof(Persoana), 1, f);
    fread(&numeLength, sizeof(int), 1, f);
    v[i].nume = malloc((numeLength + 1) * sizeof(char));
    fread(v[i].nume, sizeof(char) * numeLength, 1, f);
    v[i].nume[numeLength] = '\0';
    fread(&prenumeLength, sizeof(int), 1, f);
    v[i].prenume = malloc((prenumeLength + 1) * sizeof(char));
    fread(v[i].prenume, sizeof(char) * prenumeLength, 1, f);
    v[i].prenume[prenumeLength] = '\0';
  }

  fclose(f);
}

int main() {
  Persoana v[N], w[N];
  char *prenume[N] = {"Eric", "Kyle", "Stan", "Kenny"};
  char *nume[N] = {"Cartman", "Broflovski", "Marsh", "McCormick"};
  int i;
  for (i = 0; i < N; i++) {
    v[i].nume = nume[i];
    v[i].prenume = prenume[i];
  }

  // Serializam vectorul intr-un fisier
  serializeaza(v, N, "persoane.bin");
  // Deserializam in alt vector, din acelasi fisier. Ar trebui sa obtinem
  // aceleasi informatii.
  deserializeaza(w, N, "persoane.bin");

  for (i = 0; i < N; i++) {
    printf("%s %s\n", w[i].prenume, w[i].nume);
  }

  return 0;
}