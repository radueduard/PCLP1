#include <stdio.h>
#include <string.h>

char* substr(char *src, int n, char *dest)
{
    strncpy(dest, src, n);
}
int main()
{
    int n1, n2;
    char s[100], dest[100];
    fgets(s, 100, stdin);
    scanf("%d%d", &n1, &n2);
    substr(s + n1, n2, dest);
    printf("%\n", dest);
    return 0;
}