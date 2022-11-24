#include <stdio.h>
#include <string.h>
char* substr(char *src, int n, char *dest)
{
    strncpy(dest,src,n);
}
int main()
{char sir1[1001],sir2[1001];
int poz,n;
fgets(sir1,1001,stdin);
sir1[strlen(sir1)-1]=0;
scanf("%d%d",&poz,&n);
substr(sir1+poz,n,sir2);
printf("%s",sir2);
    
    return 0;
}