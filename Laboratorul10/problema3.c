//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

typedef struct MATERIA {
    char nume[15];
    int ore_curs;
    enum { C, S, A } tip_examen;
} MATERIA;

MATERIA* citire_MAT(MATERIA* materie){
    for (int i = 0; i < 15; ++i)
        materie->nume[i] = '\0';
    fgets(materie->nume, 16, stdin);
    materie->nume[strlen()]
}

int main() {

	return 0;
}