#include <stdio.h>
#include <string.h>
char *strdel(char *p,int n) {
    for (int i = 0; i < n; i++)
        strcpy(p, p + 1);
    return p;
}
char *strins(char *p, char *s) {
    char t[100];
    strcpy(t, p);
    strcpy(p, s);
    strcat(p, t);
    return p;
}
void inserare(char *text, char *s1, char *s2)
{
<<<<<<< HEAD
    int OK,i,j,n=0,p,a[100],b[100],m;
    char t[1000];
    for(i=1;i<=99;i++)
        a[i]=b[i]=0;
    for(i=0;i<=strlen(text)-strlen(s1);i++)
    {
        j=i;OK=1;p=0;
        while(p<strlen(s1)&&OK==1)
        {
            if(text[j]!=s1[p])
                OK=0;
            j++;p++;
        }
        if(OK)
        {
            a[++n]=i;
            b[n]=i+strlen(s1)-1;
        }
    }
    m=0;p=0;
    for(int i=1;i<=n;i++)
    {
        while(p<a[i])
        {
            t[m++]=text[p++];
        }
        for(j=0;j<strlen(s2);j++)
            t[m++]=s2[j];
        p=b[i]+1;
    }
    printf("%s",t);

}
int main()
{   char s[100],a[100],b[100];
    getchar();
    scanf("%[^\n]s",s);
    getchar();
    /*strdel(s+3,3);
    printf("%s",s);*/
    scanf("%[^\n]s",a);
    /*strins(s,b);
    */
    getchar();
    scanf("%[^\n]s",b);
    getchar();
    inserare(s,a,b);
=======
    printf("Hello world\n");
>>>>>>> main
    return 0;
}