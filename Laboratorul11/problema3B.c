//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#define BUFMAX 1005

int main(int argc, char **argv)
{
    int ok1 = 0, ok2 = 0, ok3 = 0;
    int k = 0, nrt=0;
    FILE *pFile;
    char buffer[BUFMAX];
    for (int j = 1; j < argc - 2; j++)
    {
        if (strcmp(argv[j], "i") == 0)
        {
            ok1 = 1;
        }
        else if (strcmp(argv[j], "n") == 0)
        {
            ok2 = 1;
        }
        else if (strcmp(argv[j], "c") == 0)
        {
            ok3 = 1;
        }
    }

    pFile = fopen(argv[argc - 2], "r");
    if (pFile == NULL)
        printf("Nu s-a putut deschide fisierul");
    char *s;
    strcpy(s, argv[argc - 1]);
    while (fgets(buffer, BUFMAX, pFile) != NULL)
    {   nrt++;
        char *aux;
        strcpy(aux,buffer);
        if (ok1 == 1)
        {
            for (int i = 0; i < strlen(buffer); i++)
                if (buffer[i] >= 'A' && buffer[i] <= 'Z')
                    buffer[i] += 32;
            for (int i = 0; i < strlen(s); i++)
                if (s[i] >= 'A' && s[i] <= 'Z')
                    s[i] += 32;
        }
        if (ok2 == 1)
        {        
                if(strstr(buffer,s)){
                    k++;
                    printf("[%d]%s",nrt,aux);
                }
        }else
            printf("%s",aux);
        
    }
    if(ok3)
        printf("Numarul total de linii : %d",k);
    fclose(pFile);
}