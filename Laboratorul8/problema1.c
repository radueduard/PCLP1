#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *my_replace(char* s, char* s1, char* s2) {
    char* x = (char*)malloc(100 * sizeof(char));
    char* y = (char*)malloc(100 * sizeof(char));
    y = strstr(s, s1);
    int l = y - s;
    strncpy(x, s, l);
    strcat(x, s2);
    int m = strlen(s) - l - strlen(s1);
    strncat(x, s, m);
    return x;
}
int main()
{
    char *s;
    s = (char *)malloc(30);
    char *s1;
    s1 = (char *)malloc(10);
    char *s2;
    s2 = (char *)malloc(10);
    char *sn;
    sn = (char *)malloc(30);
    scanf("%s%s%s", s1, s2, s);
    sn = my_replace(s, s1, s2);
    printf("%s", sn);
    free(s);
    free(s1);
    free(s2);
    free(sn);
    return 0;
}