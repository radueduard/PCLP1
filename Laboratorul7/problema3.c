#include <stdio.h>
#include <string.h>
char *strdel(char *p, int n)
{   
    strcpy(p,p+n);
}
char *strins(char *p, char *s)
{
    char aux[1001];
    strcpy(aux,p);
    strcpy(p,s);
    strcat(p,aux);
   
}
int main()
{char s[3001],sir[1001],sir2[1001];
int n;
fgets(s,3001,stdin);
fgets(sir,1001,stdin);
fgets(sir2,1001,stdin);
s[strlen(s)-1]=0;
sir[strlen(sir)-1]=0;
sir2[strlen(sir2)-1]=0;
char *p;
p=strstr(s,sir);
while(p!=-1)
{
<<<<<<< HEAD
    char aux[1001];
    strdel(s+(s-p),strlen(sir)-1);
    strins(s+(s-p),sir2);
    p=strstr(s,sir);
}
printf("%s", s);
    
=======
    printf("Hello world\n");
>>>>>>> main
    return 0;
}