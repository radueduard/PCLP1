#include <stdio.h>
#include <string.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
char* strdel(char* p, int n)
{
    strcpy(p, p + min(n, strlen(p)));
    return p;
}
char* strins(char* p, char* s)
{
    strcat(s, p);
    strcpy(p, s);
    return p;
}

int main() {
    char text[3000], sir_de_inlocuit[20], sir_inlocuire[20];
    fgets(text, 3000, stdin);
    fgets(sir_de_inlocuit, 20, stdin);
    fgets(sir_inlocuire, 20, stdin);

    return 0;
}
