#include <stdio.h>

#define MAX 20

typedef struct{
	char nume[15];
	int ore_curs;
	enum {C,S,A}tip_examen;
}MATERIA;

void citire_MAT(MATERIA *m)
{
	char ch;
	printf("Nume materie: ");
	fgets(m->nume, 15, stdin);
	printf("Numar ore: ");
	scanf("%d", &m->ore_curs);
	printf("Tip examen(C,S,A): ");
	scanf("%s", &ch);
	switch(ch){
		case 'C': m->tip_examen = C; break;
		case 'S': m->tip_examen = S; break;
		case 'A': m->tip_examen = A;
	}
}

void citire_PROGRAMA(MATERIA PROGRAMA[], int n)
{

}

int main()
{
	MATERIA PROGRAMA[MAX];
	int n;
	printf("Numarul de materii: ");
	scanf("%d", &n);
	citire_PROGRAMA(PROGRAMA, n);

}