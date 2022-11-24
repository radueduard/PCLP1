#include <stdio.h>
char* substr(char *src, int n, char *dest)
{
    for(int i=0;i<n;i++)
    {
        dest[i]=src[i];
    }
    return dest;
}
int main()
{   char a[100],b[100];
    int n,m;
    scanf("%s",a);
    getchar();
    scanf("%d %d",&n,&m);
    substr(a+n,m,b);
    printf("%s",b);
    return 0;
}