#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int litereEgale(char *s1, char *s2) {
    char l1, l2, l3, l4;
    l1 = s1[strlen(s1) - 2];
    l2 = s1[strlen(s1) - 1];
    l3 = s2[0];
    l4 = s2[1];
    if(l1 < 'a')
        l1 += 'a' - 'A';
    if(l2 < 'a')
        l2 += 'a' - 'A';
    if(l3 < 'a')
        l3 += 'a' - 'A';
    if(l4 < 'a')
        l4 += 'a' - 'A';
    if(l1 != l3 || l2 != l4)
        return 0;
    else return 1;
}

int main()
{
    int n, ultimulIndice, indiceCurent;
    char  *sir, s[21];
    scanf("%d", &n);

    char **cuv = (char**) malloc (n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        cuv[i] = (char*) calloc (22, sizeof(char));
        scanf("%s", s);
        strcpy(cuv[i], s);
    }

    sir = (char*) calloc(n * 22, sizeof(char));
    strcat(sir, cuv[0]);
    ultimulIndice = 0;
    for (indiceCurent = 1; indiceCurent < n; indiceCurent++) {
        if(litereEgale(cuv[ultimulIndice], cuv[indiceCurent])) {
            strcat(sir, "-");
            strcat(sir, cuv[indiceCurent]);
            ultimulIndice = indiceCurent;
        }
    }
    printf("%s", sir);
    return 0;
}