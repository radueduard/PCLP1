//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <string.h>

int dif(char *s1, char *s2)
{
    for(int i = 0; i < strlen(s1); i++)
            if(s1[i] != s2[i] && s1[i] != (s2[i] +32) && s1[i] != (s2[i] - 32))
                return 0;
    return 1;
}
int main(int argc, char **argv)
{
    FILE *f;
    f = fopen("input.txt", "r");
    char cuvant[20], linie[100];
    int nr_linie = 1, nr_linii_bune = 0;
    strcpy(cuvant, argv[argc - 1]);
    if(argv[1] == "n" || argv[2] == "n" || argv[3] == "n")
    {
        if(argv[1] == "i" || argv[2] == "i" || argv[3] == "i")
        {
            while (fgets(linie, sizeof(linie), f) != NULL) {
                char aux[20], *p;
                strcpy(aux, linie);
                p = strtok(aux, " ");
                while (p != NULL) {
                    if (dif(p, cuvant)) {
                        nr_linii_bune++;
                        printf("[%d] %s", nr_linie, linie);
                        break;
                    }
                    p = strtok(NULL, " ");
                }
                nr_linie++;
            }
        }
        else
        {
            while(fgets(linie, sizeof(linie), f) != NULL)
            {
                if(strstr(linie, cuvant) != NULL)
                {
                    nr_linii_bune++;
                    printf("[%d] %s", nr_linie, linie);
                }
                nr_linie++;
            }
        }
    }
    else
    {
        while (fgets(linie, sizeof(linie), f) != NULL) {
            if (strstr(linie, cuvant) != NULL) {
                nr_linii_bune++;
                printf("%s", linie);
            }
        }
    }
    if(argv[1] == "c" || argv[2] == "c" || argv[3] == "c")
        printf("Numarul total de linii: %d", nr_linii_bune);
    return 0;
}