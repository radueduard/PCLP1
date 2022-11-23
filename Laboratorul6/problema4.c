#include <stdio.h>
#include <string.h>

int sir (char a[], char b[])
{
    int n;
    if (strlen(a)>strlen(b))
        n=strlen(b);
    else n=strlen(a);
    for (int i=0; i<n; i++)
    {
        if (a[i]>b[i])
            return 1;
        if (a[i]<b[i])
            return -1;
    }
    return 0;
}

int main ()
{
    char a[101], b[101];
    scanf("%s%s",a,b);
    int n;
    n=sir(a,b);
    printf("%d",n);

    return 0;
}