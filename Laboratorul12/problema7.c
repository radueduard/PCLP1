#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 4

typedef struct Persoana {
	char* nume;
	char* prenume;
} Persoana;

void serializeaza(Persoana v[], int nrPersoane, char* fileName)
{
	FILE* f = fopen(fileName, "wb");

    for(int i = 0; i < nrPersoane; i++){
        int dimNume = strlen(v[i].nume);
        int dimPrenume = strlen(v[i].prenume);
        fwrite(&dimNume, 4, 1, f);
        fwrite(&dimPrenume, 4, 1, f);
    }
    for(int i = 0; i < nrPersoane; i++){
        fwrite(v[i].nume, sizeof(char), strlen(v[i].nume), f);
        fwrite(v[i].prenume, sizeof(char), strlen(v[i].prenume), f);
    }
    fclose(f);
}

void deserializeaza(Persoana v[], int nrPersoane, char* fileName) {
    FILE *f = fopen(fileName, "rb");

    for (int i = 0; i < nrPersoane; i++) {
        int dimNume, dimPrenume;
        fread(&dimNume, 4, 1, f);
        fread(&dimPrenume, 4, 1, f);

        v[i].nume = (char *) malloc(sizeof(char) * (dimNume + 1));
        v[i].prenume = (char *) malloc(sizeof(char) * (dimPrenume + 1));
    }

    for (int i = 0; i < nrPersoane; i++) {
        fread(v[i].nume, sizeof(char), strlen(v[i].nume), f);
        fread(v[i].prenume, sizeof(char), strlen(v[i].prenume), f);
        v[i].nume[strlen(v[i].nume)] = '\0';
        v[i].prenume[strlen(v[i].prenume)] = '\0';
    }
    fclose(f);
}

int main()
{
	Persoana v[N], w[N];
	char* prenume[N] = { "Eric", "Kyle", "Stan", "Kenny" };
	char* nume[N] = { "Cartman", "Broflovski", "Marsh", "McCormick" };
	int i;
	for (i = 0; i < N; i++) {
		v[i].nume = nume[i];
		v[i].prenume = prenume[i];
	}

	// Serializam vectorul intr-un fisier
	serializeaza(v, N, "persoane.bin");
	// Deserializam in alt vector, din acelasi fisier. Ar trebui sa obtinem aceleasi informatii.
	deserializeaza(w, N, "persoane.bin");

	for (i = 0; i < N; i++) {
		printf("%s %s\n", w[i].prenume, w[i].nume);
	}

	return 0;
}