# include "Produs.h"

void creare_fisier(char* nume_fisier)
{
	char nume_produs[8];
	Produs p;
	int x,i;
	FILE *f = fopen(nume_fisier, "wb");
	time_t t;
	srand (time(&t));
	//srand (time(NULL));
	for(i=0; i<100; i++)
	{
		x = rand() % 100;
		sprintf(nume_produs, "Produs%d", x);
		strcpy(p.nume_produs, nume_produs);
		p.pret_produs = x <= 100 ? x : x % 100;
		p.cantitate = x % 100;
		fwrite(&p, 1, sizeof(Produs), f);
	}
	fclose(f);
}

void sortare(char* nume_fisier)
{
	Produs p[100], aux;
	int i, j;
	FILE *f = fopen(nume_fisier, "rb");
	fread(p, 100, sizeof(Produs), f);
	fclose(f);
	for(i=0; i<99; i++)
		for(j=i+1; j<99-i; j++)
		{
			if(strcmp(p[i].nume_produs, p[j].nume_produs) == 1)
			{
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
		for(i = 0; i < 100 ; i++)
			printf("%s %d %.2f\n", p[i].nume_produs, p[i].cantitate, p[i].pret_produs);
}


int main()
{
	creare_fisier(fisier);
	Produs p;
	int i;
	FILE *f = fopen(fisier, "rb");
	for(i=0; i<100; i++)
	{
		fread(&p, 1, sizeof(Produs), f);
		printf("%s %d %.2f\n", p.nume_produs, p.cantitate, p.pret_produs);
	}
	fclose(f);
	return 0;
}