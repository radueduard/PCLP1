#include <stdio.h>
#include <stdlib.h>

 typedef struct
{
    char nume[15];
    int ore_curs;
    enum {C, S, A} tip_examen;
}MATERIA;

 MATERIA* citire_MAT(void)
{
     MATERIA *materie_noua = malloc(sizeof(MATERIA));
     for(int i = 0; i < 15; i++)
         materie_noua->nume[i] = '\0';
     fgets(materie_noua->nume, 15, stdin);
     materie_noua->nume[strlen(materie_noua->nume)] = '\0'
     fgets()
}

int main()
{

    return 0;
}