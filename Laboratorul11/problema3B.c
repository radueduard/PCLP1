//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* stristr(char *sir1, char *sir2) {
    char *caseSir1 = malloc ((strlen(sir1) + 1) * sizeof(char));
    char *caseSir2 = malloc ((strlen(sir2) + 1) * sizeof(char));

    strcpy(caseSir1, sir1);
    strcpy(caseSir2, sir2);

    for (int i = 0; i < strlen(caseSir1); ++i) {
        if(caseSir1[i] >= 'A' && caseSir1[i] <= 'Z')
            caseSir1[i] = caseSir1[i] + 32;
    }
    for (int i = 0; i < strlen(caseSir2); ++i) {
        if(caseSir2[i] >= 'A' && caseSir2[i] <= 'Z')
            caseSir2[i] = caseSir2[i] + 32;
    }

    if(strstr(caseSir1, caseSir2)) {
        int dif = strstr(caseSir1, caseSir2) - caseSir1;
        free(caseSir1);
        free(caseSir2);
        return sir1 + dif;
    }
    else {
        free(caseSir1);
        free(caseSir2);
        return NULL;
    }
}

int main(int argc, char **argv) {
    FILE *fisierInput;
    fisierInput = fopen(argv[argc - 2], "r");
    char buffer[100];

    int nrLinii = 0, linie = 0;
    char argumente[5];
    for (int i = 1; i < argc - 2; ++i) {
        strcat(argumente, argv[i]);
    }

    while(fgets(buffer, 100, fisierInput) != NULL) {
        linie++;
        if(strchr(argumente, 'i')) {
            if (stristr(buffer, argv[argc - 1])) {
                nrLinii++;
                if(strchr(argumente, 'n'))
                    printf("[%d] %s", linie, buffer);
                else
                    printf("%s", buffer);
            }
        }
        else {
            if (strstr(buffer, argv[argc - 1])) {
                nrLinii++;
                if(strchr(argumente, 'n'))
                    printf("[%d] %s", linie, buffer);
                else
                    printf("%s", buffer);
            }
        }
    }
    if(strchr(argumente, 'c'))
        printf("Numar total de linii: %d\n", nrLinii);

    fclose(fisierInput);
    return 0;
}