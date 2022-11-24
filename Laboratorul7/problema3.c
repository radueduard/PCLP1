#include <stdio.h>
#include <string.h>

char * strdel(char * p, int n)
{
    strcpy(p, p + n);
    return p;
}
char * strins(char * p, char * s)
{
    strcat( s,  p);
    strcpy(p, s);
    return p;
}


int main() {

    char s[3000], s1[20], s2[20];
    fgets(s ,3000, stdin);
    scanf("%s", s1);
    scanf("%s", s2);
    for(int i = 0; i < strlen (s) - strlen(s1); i++)
        if(strcmp(s1,))
    return 0;
}
