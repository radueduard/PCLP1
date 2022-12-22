//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int k, lin = 0, nr = 0;
    int i=0, c=0, n=0;
    FILE *fp;
    char *str = argv[argc-1];
    fp = fopen(argv[argc-2],"r");
    if(fp == NULL)
        printf("Nu s-a putut deschide fisierul");
    for(k=1;k<argc-2;k++)
        if(strcmp(argv[k], "i") == 0)
            i = 1;
        else if(strcmp(argv[k], "n") == 0)
            n = 1;
        else if(strcmp(argv[k], "c" == 0))
            c = 1;
    char s[1000];
    while(fgets(s,1000,fp)){
        if(i==1)
            for(int d=0; d<strlen(s); d++)
                s[i] = tolower(s[i]);
        if(strstr(s,str)){
            if(n==1)
                printf("[%d]%s",lin,s);
            else
                printf("%s",s);
            nr++;
        }
        lin++;
    }
    if(c==1)
        printf("Numar total de linii: %d",nr);

    fclose(fp);
    return 0;
}