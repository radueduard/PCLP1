#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Produs.h"

void creare_fisier(char* nume_fisier){
	int i;
	Produs produse[100];
	for ( i = 0; i < 100; i++)
	{
		int x = rand();
		sprintf(produse[i].nume_produs, "%d", x);
		produse[i].cantitate = x % 100;
		produse[i].pret_produs = (x <=100) ? x : (x % 100);
	}
	FILE *fisier = fopen(nume_fisier, "wb");
	fwrite(produse, sizeof(Produs), 100, fisier);
	fclose(fisier);
}

void afisare_ecran(char* nume_fisier){
	int i;
	Produs produse[100];
	FILE *fisier = fopen(nume_fisier, "rb");

	fread(produse, sizeof(Produs), 100, fisier);

	for ( i = 0; i < 100; i++)
	{
		printf("%s %d %lf\n", produse[i].nume_produs, produse[i].cantitate, produse[i].pret_produs);
	}
	fclose(fisier);
}

void sort(char *nume_fisier){
	int i, j;
	Produs produse[100];
	FILE *fisier = fopen(nume_fisier, "rb+");
	fread(produse, sizeof(Produs), 100, fisier);
	for (i = 0; i < 100 - 1; i++)
	{
    	for (j = 0; j < 100 - i - 1; j++)
		{
			if (atoi(produse[j].nume_produs) > atoi(produse[j + 1].nume_produs))
	   		{
				Produs auxiliar = produse[j];
				produse[j] = produse[j + 1];
				produse[j + 1] = auxiliar;
	  		}
		}
	}
	fseek(fisier, 0, SEEK_SET);
  	fwrite(produse, sizeof(Produs), 100, fisier);
  	fclose(fisier);
}

int main(int argc, char **argv) {
	srand(time(NULL));

	char *nume_fisier = argv[1];
	creare_fisier(nume_fisier);
	afisare_ecran(nume_fisier);
	sort(nume_fisier);
}