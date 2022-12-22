#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BUFMAX 1005

void lowercase(char *s)
{
    int i;
    for (i = 0; i < strlen(s); i++)
        s[i] = tolower(s[i]);
}

int main(int argc, char *argv[])
{
    FILE *f;
    char buffer[BUFMAX];
    int i, n = 0, c = 0, vi, vn, vc;
    int k;
    f = fopen(argv[argc - 2], "r");
    if (f == NULL)
    {
        printf("Eroare la deschiderea fisierului!\n");
        return 1;
    }
    for (k = 1; k < argc - 2; k++)
    {    
        switch (argv[k][1])
        {
        case 'i':
            vi = 1;
            break;
        case 'n':
            vn = 1;
            break;
        case 'c':
            vc = 1;
            break;
        }
    }
    if (vi)
        lowercase(argv[argc - 1]);
    while (fgets(buffer, BUFMAX, f) != NULL)
    {
        n++;
        if (strstr(buffer, argv[argc - 1]))
        {
            c++;
            if (vn)
                printf("[%d] ", n);
            printf("%s", buffer);
        }
    }
    if (vc)
        printf("Numarul total de linii: %d\n", c);
    fclose(f);
    return 0;
}