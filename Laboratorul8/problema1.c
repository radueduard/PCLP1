# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 
char* my_replace(char *s, char *s1, char *s2)
{
    char *aux = malloc((sizeof(s) - sizeof(s1)) + sizeof(s2) + 1);
    int i = strstr(s, s1) - s, j = strlen(s1);
    strncpy(aux, s, i);
    strcat(aux, s2);
    strncat(aux, (s + i + j), (strlen(s) - i - j));
    return aux;
}

int main()
{
    char *s, *s1, *s2, *aux;
    s = malloc(100);
    s1 = malloc(100);
    s2 = malloc(100);
    scanf("%s%s%s", s, s1, s2);
    aux = my_replace(s, s1, s2);
    printf("%s\n", aux);
}