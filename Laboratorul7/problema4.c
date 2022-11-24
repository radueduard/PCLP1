#include <stdio.h>
#include <string.h>

char* substr(char *src, int n, char *dest)
{
    strcpy(src+n,"");
    strcpy(dest,src);
    printf("%s",dest);
}

int main()
{
    int p,n;
    char s[100], d[100];
    fgets(s,100,stdin);
    scanf("%d%d",&p,&n);
    substr(s+p,n,d);
    return 0;
}