#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pereche
{
    char *v;
    int aparitii;
};

int main() {

    int n;
    scanf("%d", &n);
    struct pereche * P;
    char cuvant[30];
    scanf("%s", cuvant);
    P = (struct pereche *) malloc (sizeof(struct pereche));
    P[0].v = (char *) malloc ((strlen(cuvant) + 1) * sizeof(char));
    strcpy(P[0].v, cuvant);
    P[0].aparitii = 1;

    int structuri = 1;
    for(int i = 1; i < n; i++)
    {
        scanf("%s", cuvant);
        int ok = 0;
        for(int k = 0; k < i; k++)
            if(strcmp(P[k].v, cuvant) == 0)
            {
                P[k].aparitii++;
                ok = 1;
                break;
            }
        if(ok == 0)
        {
            P = (struct pereche *) realloc (P, (++structuri) * sizeof(struct pereche));
            P[structuri - 1].v = (char *) malloc ((strlen(cuvant) + 1) * sizeof(char));
            strcpy(P[structuri - 1].v, cuvant);
            P[structuri - 1].aparitii = 1;
        }

    }

    for(int i = 0; i < structuri; i++)
        printf("%s %d\n", P[i].v, P[i].aparitii);

    /* METODA 2
    int n;
    scanf("%d", &n);
    char** cuvinte = (char **) malloc (n * sizeof(char *));
    char cuvant[30];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", cuvant);
        cuvinte[i] = (char *) malloc (strlen(cuvant) * sizeof(char));
        for(int j = 0; j < strlen(cuvant); j++)
            cuvinte[i][j] = cuvant[j];
        cuvinte[i][strlen(cuvant)] = '\0';
    }

    int t = -1;
    int *v = (int *) malloc (sizeof(int));
    for(int i = 0; i < n; i++)
    {
        if(cuvinte[i][0] != '\0')
        {
            t++;
            if(t > 0)
                v = (int *) realloc (v,(t + 1) * sizeof(int));
            v[t] = 1;
            strcpy(cuvant, cuvinte[i]);
            for (int j = i + 1; j < n; j++)
                if(strcmp(cuvant, cuvinte[j]) == 0)
                {
                     v[t]++;
                     cuvinte[j][0] = '\0';
                }
        }
    }

    t = 0;
    for(int i = 0; i < n; i++)
    {
        if(cuvinte[i][0] != '\0')
        {
            printf("%s %d\n", cuvinte[i], v[t]);
            t++;
        }
    }
*/
    return 0;
}