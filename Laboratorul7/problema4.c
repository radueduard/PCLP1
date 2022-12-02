#include <stdio.h>
#include <string.h>

char* substr(char* src, int n, char* dest)
{
    strncpy(dest, src, n);
    dest[strlen(dest)] = '\0';
    return dest;
}
int main()
{
    char s[100], subsir[100];
    int poz, nr;
    scanf("%s", s);
    scanf("%d%d", &poz, &nr);
    substr(s + poz, nr, subsir);
    puts(subsir);
    return 0;
}
