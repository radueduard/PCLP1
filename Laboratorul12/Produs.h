#ifndef __STDIO__
#define __STDIO__
#include <stdio.h>
#endif

#ifndef __STDLIB__
#define __STDLIB__
#include <stdlib.h>
#endif

#ifndef __STRING__
#define __STRING__
#include <string.h>
#endif

#ifndef __TIME__
#define __TIME__
#include <time.h>
#endif

typedef struct
{
    char nume_produs[20];
    int cantitate;
    float pret_produs;
}Produs;

void creare_fisier(char* nume_fisier);

void sortare(char* nume_fisier);

