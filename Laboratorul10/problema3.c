//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
struct MATERIA
{
	char nume[16];
	int ore_curs;
	char tip_examen[2];
}

void citire_MAT(struct MATERIA x)
{
	fgets(x,1000,stdin);
	
}
int main() {

	
	return 0;
}