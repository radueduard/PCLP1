#include <stdio.h>
#include <string.h>
char* strdel(char* p, int n) {
char aux[100];
strcpy(aux, p + n);
strcpy(p, aux);
return p;  
}
char* strins(char* p, char *s) {
    char aux[100];
    strcpy(aux, p);
    strcpy(p, s);
    strcat(p, aux);
    return p;
}
int main() {
char s[100], replacethis[100], withthis[100];
fgets(s, 100, stdin);
scanf("%s%s", replacethis, withthis);
char *p = strstr(s, replacethis);
while (p != NULL) {
    strdel(p, strlen(replacethis));
    strins(p, withthis);
    p = strstr(p + strlen(withthis), replacethis);

int main()
{
    puts("Hello World!");
    return 0;
}