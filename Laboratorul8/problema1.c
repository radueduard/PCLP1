#include <stdio.h>
#include <string.h>
void replace(char *s, char *s1, char *s2)
{
    char t[1000];
    int i=0,m,p,k;
    k=strstr(s,s1)-s;
    while(i<k)
    {
        t[m++]=s[i++];
    }
    p=0;
    while(p<strlen(s2))
    {
        t[m++]=s2[p++];
    }
    i=k+strlen(s1);
    while(i<strlen(s))
    {
        t[m++]=s[i++];
    }
    strcpy_s(s,t);
}
int main()
{
    char s[1000],s1[1000],s2[1000];
    scanf_s("%s",s1);
    scanf_s("%s",s2);
    getchar();
    scanf_s("%[^\n]s",s);
    int OK=1;
    while(OK==1) {

        if(strstr(s,s1)!=NULL)
            replace(s, s1, s2);
        else
            OK=0;
    }
    printf("%s",s);
    return 0;
}