void creare_fisier(char *nume_fisier)
{
	srand(time(NULL));
	FILE *fisier = fopen(nume_fisier, "wb");
	int i;
	struct Produs produs;
	for (i = 0; i < 100; i++)
	{
		sprintf(produs.nume, "Produs%d", rand());
		produs.cantitate = rand() % 100;
		produs.pret = (rand() % 100) ? rand() % 100 : produs.cantitate;
		fwrite(&produs, sizeof(struct Produs), 1, fisier);
	}
	fclose(fisier);