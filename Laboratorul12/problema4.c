
void sortare_nume(char *nume_fisier)
{
	FILE *fisier = fopen(nume_fisier, "rb");
	struct Produs produs;
	int numar_produse = 0;
	while (fread(&produs, sizeof(struct Produs), 1, fisier))
	{
		numar_produse++;
	}
	struct Produs *produse = (struct Produs *)malloc(numar_produse * sizeof(struct Produs));
	rewind(fisier);
	int i;
	for (i = 0; i < numar_produse; i++)
	{
		fread(&produse[i], sizeof(struct Produs), 1, fisier);
	}
	int schimb;
	do
	{
		schimb = 0;
		for (i = 0; i < numar_produse - 1; i++)
		{
			if (strcmp(produse[i].nume, produse[i + 1].nume) > 0)
			{
				struct Produs temp = produse[i];
				produse[i] = produse[i + 1];
				produse[i + 1] = temp;
				schimb = 1;
			}
		}
	} while (schimb);
	rewind(fisier);
	for (i = 0; i < numar_produse; i++)
	{
		fwrite(&produse[i], sizeof(struct Produs), 1, fisier);
	}
	free(produse);
	fclose(fisier);
}