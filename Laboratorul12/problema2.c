#include <stdio.h>
#include <time.h>
#include "Produs.h"
void creare_fisier(char* nume_fisier) {
    srand(time(NULL));
    FILE *fp = fopen(nume_fisier, "wb");
    int i;
    struct Produs *prodcdus;
    for (i = 0; i < 100; i++) {
        sprintf(produs->nume, "Produs%d", rand());
        produs->cantitate = rand() % 100;
        produs->pret = (rand() % 100) ? rand() % 100 : produs->cantitate;
        fwrite(&produs, sizeof(struct Produs), 1, fp);
    }
    fclose(fp);
}
int main(int argc,char *argv[]) {
    creare_fisier(argv[1]);
	return 0;
}