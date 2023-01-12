typedef struct {
    char nume_produs[20];
    int cantitate;
    float pret_produs;
} Produs;

void creare_fisier(char* nume_fisier);
void afisare_ecran(char* nume_fisier);
void sort(char *nume_fisier);