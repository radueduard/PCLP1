#include <stdio.h>
#include <string.h>
int main()
{
    int n,m=0,OK,i,j;
    char s[1000],t[1000],v[1000][20],*p,a[5],b[5];
    a[0]=b[0]=0;
    for(i=0;i<1000;i++)
    {
        v[i][0]=0;
    }
    t[0]=0;
    scanf_s("%d",&n);
    getchar();
    scanf_s("%[^\n]s",s);
    p=strtok_s(s," ");
    while(p)
    {
        strcpy_s(v[++m],p);
        p=strtok_s(NULL," ");
    }
    strcat_s(t,v[1]);
    i=1;
    while(i<m)
    {
        j=i+1;OK=0;
        a[0]=v[i][strlen(v[i])-2];
        a[1]=v[i][strlen(v[i])-1];
        while(OK==0&&j<=m)
        {
            b[0]=v[j][0];
            b[1]=v[j][1];
            if(stricmp_s(a,b)!=0)
                j++;
            else
                OK=1;
        }
        if(OK)
        {
            strcat_s(t,"-");
            strcat_s(t,v[j]);
            i=j;
        }

    }
    t[strlen(t)]=0;
    printf("%s",t);
}

return 0;
}