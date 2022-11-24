#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    if(a < b)
        return a;
    else return b;
}

char *strdel(char *p, int n) {
    strcpy(p, p + min(n, strlen(p)));
    return p;
}

char *strins(char *p, char *s) {
    strcpy(p, strcat(s, p));
    return p;
}

int main()
{
    char text[3001], sirDeInlocuit[21], sirCuCareSeInlocuieste[21];
    fgets(text, 3001, stdin);
    text[strlen(text) - 1] = 0;
    fgets(sirDeInlocuit, 21, stdin);
    fgets(sirCuCareSeInlocuieste, 21, stdin);
    puts(text);
    return 0;
}