//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef enum examen {C, S, A} examen;
typedef struct MATERIA
{
    char nume[16];
    int ore_curs;
    examen tip_examen;
}MATERIA;
int citire_MAT(MATERIA m)
{
    int n;
    getchar();
    for(int i = 0; i < 15; i++)
        m.nume[i] = '\0';
    fgets(m.nume, 16, stdin);
    n = strlen(m.nume);
    m.nume[n - 1] = '\0';
    n--;
    for(int i = 0; i < n; i++)
        if((m.nume[i] != ' ') && (m.nume[i] < 'A' || m.nume[i] >'Z') && (m.nume[i] < 'a' || m.nume[i] >'z'))
            return 0;
    scanf("%d", &m.ore_curs);
    if(m.ore_curs <= 0)
        return 0;
    getchar();
    char c;
    scanf("%c", &c);
    if(c == 'C')
        m.tip_examen = 'C';
    else if(c == 'S')
        m.tip_examen = 'S';
    else if(c == 'A')
        m.tip_examen = 'A';
    else
        return 0;
    return 1;
}
void citire_PROGRAMA(MATERIA *PROGRAMA, int n)
{
    int ok;
    for(int i = 0; i < n; i++)
        citire_MAT(PROGRAMA[i]);
}
void afisare_PROGRAMA(char c, int nr, MATERIA *PROGRAMA, int n)
{
    for(int i = 0; i < n; i++)
        if(c == PROGRAMA[i].tip_examen && nr == PROGRAMA[i].ore_curs)
        {
            printf("%s\n", PROGRAMA[i].nume);
            printf("%d\n", PROGRAMA[i].ore_curs);
            printf("%c", PROGRAMA[i].tip_examen);
        }
}
int main()
{
    MATERIA PROGRAMA[MAX];
    int n, nr;
    char c;
    scanf("%d", &n);
    citire_PROGRAMA(PROGRAMA, n);
    getchar();
    scanf("%c", &c);
    scanf("%d", &nr);
    afisare_PROGRAMA(c, nr, PROGRAMA, n);
    return 0;
}