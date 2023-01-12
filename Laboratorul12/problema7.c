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
	int i, dim;
	char str[1024];
	for(i=0; i< nrPersoane; i++)
	{
		dim = strlen(v[i].prenume);
		fwrite(&dim, 1, sizeof(dim), f);
		strcpy(str, v[i].prenume);
		fwrite(str, 1, dim, f);

		dim = strlen(v[i].nume); 
		fwrite(&dim, 1, sizeof(dim), f); 
		strcpy(str, v[i].nume);
		fwrite(str, 1, dim, f);
	}

	fclose(f);
}

void deserializeaza(Persoana v[], int nrPersoane, char* fileName)
{
	FILE* f = fopen(fileName, "rb");
	int i, dim;
	char str[1024];
	for(i = 0; i < nrPersoane; i++) 
	{
		fread(&dim, 1, sizeof(dim), f);
		fread(str, 1, dim, f);
		str[dim] = 0;
		v[i].prenume = strdup(str);
		
		fread(&dim, 1, sizeof(dim), f); 
        	fread(str, 1, dim, f);
        	str[dim] = 0;
		v[i].nume = strdup(str); 
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