#include <stdio.h>
#include <string.h>
char *next (char *from, char *word)
{
    int i=0,j,t=0,OK=0;
    while(from[i]<'a'||(from[i]>'z'&&i<strlen(from)))
        i++;
    j=i+1;
    while(from[j]>='a'&&from[j]<='z'&&j<strlen(from))
        j++;
    if(i<strlen(from)) {
        for (int k = i; k < j; k++)
            word[t++] = from[k];
    }
    if(j>=strlen(from))
        OK=1;
    strcpy(from,from+j);
    return from;
}

int main()
{
    char s[1000],t[1000];
    int OK=0;
    getchar();
    scanf("%[^\n]s",s);
    while(OK==0)
    {
        for(int i=0;i<99;i++)
            t[i]=0;
        if(strlen(s)>0)
        {
            next(s,t);printf("%s ",t);
        }
        else
            break;
    }

}