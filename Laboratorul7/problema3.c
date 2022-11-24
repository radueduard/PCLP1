#include <stdio.h>
#include <string.h>

char *strdel (char *p, int n)
{
    //printf("%s\n",p);
    strcpy(p,p+n);
    //printf("%s\n",p);
}

char *strins (char *p, char *s)
{
    strcat(s,p);
    strcpy(p,s);
    int n=strlen(c);
    strcat(p+n,p+n+1);
    //printf("%s",p);
}

int main()
{
    char a[3000], b[20], c[20];
    fgets(a,3000,stdin);
    fgets(b,20,stdin);
    fgets(c,20,stdin);
    int x=strstr(a,b);
    strdel(a+x,strlen(b));
    strins(a,c);
    printf("%s",a);

    return 0;
}