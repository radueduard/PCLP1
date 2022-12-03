#include <stdio.h>
#include <string.h>
int main()
{
    char v[1001][20], s[21];
    int b[1001], n,m=0;
    for(int i=0;i<1000;i++)
    {
        b[i]=0;
        v[i][0]=0;
    }
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        scanf_s("%s",s);
        if(m==0)
        {   m++;
            strcpy_s(v[m],s);
            b[m]++;
        }
        else
        {
            int j=1,OK=0;
            while(j<=m&&OK==0)
            {
                if(strcmp(v[j],s)==0)
                {
                    OK=1;
                    b[j]++;
                }
                else
                    j++;
            }
            if(OK==0)
            {
                m++;
                strcpy_s(v[m],s);
                b[m]++;
            }

        }
    }
    for(int j=1;j<=m;j++)
    {
        printf("%s %d\n",v[j],b[j]);
    }

    return 0;
}