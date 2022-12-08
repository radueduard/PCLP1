#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pereche {
    char *cuv;
    int aparitii;
}Pereche;

int cuvantNou(Pereche *v, char *cuv, int lenV) {
    for (int i = 0; i < lenV; ++i)
        if(!strcmp(v[i].cuv, cuv))
            return i;
    return -1;
}

void adaugareElement(Pereche *v, char *cuv, int *lenV, int *capV) {
    if(*lenV == *capV) {
        v = (Pereche *) realloc(v, 2 * (*capV) * sizeof(Pereche));
        (*capV) *= 2;
    }
    strcpy(v[*lenV].cuv, cuv);
    v[*lenV].aparitii = 1;
    (*lenV)++;
}

int main()
{
    int N, lenV = 1, capV = 10;
    Pereche *v = (Pereche*) malloc(10 * sizeof(Pereche));
    char cuv[25];
    scanf("%d", &N);

    scanf("%s", cuv);
    v[0].cuv = (char*) malloc ((strlen(cuv) + 1) * sizeof(char));
    strcpy(v[0].cuv, cuv);
    v[0].aparitii = 1;

    for (int i = 1; i < N; ++i) {
        scanf("%s", cuv);
        int index = cuvantNou(v, cuv, lenV);
        if(index == -1) {
            v[index].aparitii++;
        }
        else {
            adaugareElement(v, cuv, &lenV, &capV);
        }
    }

    for (int i = 0; i < lenV; ++i) {
        printf("%s %d\n", v[i].cuv, v[i].aparitii);
    }
    return 0;
}