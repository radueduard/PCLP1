//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <string.h>

typedef struct codif
{
    char litera;
    char cheie;
}codif;
int main(int argc, char **argv)
{
    FILE *f1, *f2, *f3;
    f1 = fopen("tabela_de_codare.in", "r");
    f2 = fopen("input.txt", "r");
    f3 = fopen("output.txt", "a");
    codif cod[20];
    char c, linie[100];
    int nr = 0;
    while((c=fgetc(f1)) != EOF)
    {
        if (c != ' ' && c != '\n')
        {
            cod[nr++].litera = c;
            cod[nr++].cheie = c + 1;
        }
    }
    cod[nr].litera = '\0';
    cod[nr].cheie = '\0';
    while(fgets(linie, sizeof(linie), f2) != NULL)
    {
        for (int i = 0; i < strlen(linie); i++)
        {
            for (int j = 0; j < nr; j++)
            {
                if (linie[i] == cod[j].litera)
                    linie[i] = cod[j].cheie;
                else if (linie[i] == cod[j].litera - 32)
                    linie[i] = cod[j].cheie - 32;
            }
        }
       fprintf(f3, "%s", linie);
    }
    fclose(f3);
    return 0;
}