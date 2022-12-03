#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_replace(char *s, char *s1, char *s2)
{
    char *aux;
    aux = (char *)malloc((strlen(s) - strlen(s1) + strlen(s2) + 1) * sizeof(char));
    int i;
    i = strstr(s, s1) - s;
    strncpy(aux, s, i);
    strcat(aux, s2);
    strncat(aux, s + i + strlen(s1), strlen(s) - i - strlen(s1));
    strcpy(s, aux);
    return s;
}
int main()
{
    char *s, *s1, *s2, *aux;
    scanf("%s", s1);
    scanf("%s", s2);
    fgets(s, 101, stdin);
    my_replace(s, s1, s2);
    printf("%s", s);
    return 0;
}
