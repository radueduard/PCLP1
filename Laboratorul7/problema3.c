#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* strdel(char* p, int n);
char* strins(char* p, char* s);

int main()
{
    char text[5000], x[5000], y[5000];
    scanf("%[^\n]s", text);
    scanf("%s%s", x, y);
    if (strlen(text) > 1000 || strlen(x) > 20 || strlen(y) > 20)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    char* t = NULL;
    t = strstr(text, x);
    while (t != NULL)
    {
        strdel(t, strlen(x));
        strins(t, y);
        t = strstr(t + strlen(y), x);
    }
    printf("%s\n", text);
}

char* strdel(char* p, int n)
{
    strcpy(p, p + n);
    return p;
}

char* strins(char* p, char* s)
{
    char* q;
    q = malloc(20 * sizeof(char));
    strcpy(q, p);
    strcpy(p, s);
    strcat(p, q);
    return p;
    free(q);
}
