#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv) {
    FILE *citire = fopen("/mnt/c/Users/Adelin/CLionProjects/PCLP1/Laboratorul11/input.txt", "r");
    char *s, *p, linie[100];
    int nr_linie = 0, OK, nr_linii_gasite = 0, j, OK1;
    s = (char *) malloc(200);
    while(fgets(s, 100, citire))
    {   ++nr_linie;
        strcpy(linie, s);
        p = strtok(linie, " "); OK = 0;
        while(p) {
            if(strlen(p) == strlen(argv[argc - 1])) {
                j = 0; OK1 = 1;
                while(j < strlen(p)) {
                    if(p[j] == argv[argc - 1][j] || p[j] == argv[argc - 1][j] - 32 || p[j] == argv[argc - 1][j] + 32) {
                        j++;
                    } else {
                        OK1 = 0;
                    }
                }
                if (OK1 == 1) {
                    OK = 1;
                }
            }
            p = strtok(NULL," ");
        }
        if(OK == 1)
        {
            nr_linii_gasite++;
            printf("[%d]%s\n",nr_linie,s);
        }
    }
    printf("Numar total de linii: %d", nr_linii_gasite);
    return 0;
}