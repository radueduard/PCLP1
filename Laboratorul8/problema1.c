#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_replace(char *s, char *s1, char *s2)
{
    char *aux = malloc(101 * sizeof(char));
    char *p;
    int l = strlen(s1);
    p = strstr(s, s1);
    strncat(aux, s, p - s);
    strcat(aux, s2);
    strcat(aux, p + l);
    strcpy(s, aux);
    strcpy(aux, "");
    free(aux);
}
int main()
{
    char s[101], s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    gets();
    fgets(s, 101, stdin);
    s[strlen(s) - 1] = 0;
    while (strstr(s, s1))
        my_replace(s, s1, s2);
    printf("%s", s);
    return 0;
}