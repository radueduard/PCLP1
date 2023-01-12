void afisare_ecran(char *nume_fisier)
{
	FILE *fisier = fopen(nume_fisier, "rb");
	struct Produs produs;
	while (fread(&produs, sizeof(struct Produs), 1, fisier))
	{
		printf("Produs: %s, Cantitate: %d, Pret: %d\n", produs.nume, produs.cantitate, produs.pret);
	}
	fclose(fisier);
}