//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define BUFMAX 1005
void litere_mici(char *s)
{
    for(int i=0;i<strlen(s);i++)
    s[i]=tolower(s[i]);
}
int main(int argc, char **argv) {
    FILE *f;
    f=fopen(argv[argc-2],"r");
    char buffer[BUFMAX];
    int opt1,opt2,opt3,nr_tot=0,nr_linie=0;
    for(int i=1;i<argc-2;i++)
    {
       if(argv[i][0]=='i')
        opt1=1;
        if(argv[i][0]=='n')
            opt2=1;
        if(argv[i][0]=='c')
            opt3=1;
    }
    if(opt1==1)
    {
        litere_mici(argv[argc-1]);
        while(fgets(buffer,BUFMAX,f)!=NULL)
        litere_mici(buffer);
        //printf("%s",buffer);}
        //printf("\n");
    }
    while(fgets(buffer,BUFMAX,f)!=NULL)
    {
        litere_mici(buffer);
        nr_linie++;
            if(strstr(buffer,argv[argc-1])!=0)
            {
                nr_tot++;
                if(opt2==1)
                printf("[%d] ",nr_linie);
                printf("%s",buffer);
            }
    }
    if(opt3==1)
    printf("Numar total de linii: %d\n",nr_tot);
    fclose(f);
}