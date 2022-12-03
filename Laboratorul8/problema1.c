#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_replace(char *s, char *s1, char *s2){
    char *p;
    *p=strstr(s,s1);
    printf("%d\n",p);
    strcat(s2,s+*p+strlen(s1)-1);
    printf("%s",s2);
}
int main()
{
    char s[50],s1[50],s2[100];
    fgets(s1,50,stdin);
    fgets(s2,50,stdin);
    fgets(s,100,stdin);
    my_replace(s,s1,s2);
}

