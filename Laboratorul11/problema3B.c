//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cautare(char *filename, char *str,int i,int c, int n){
    FILE *fp;
    int j,nr,d;
    j=0;
    nr=0;
    fp= fopen(filename,"r");
    if (fp == NULL){
        printf("Nu s-a putut deschide fisierul");
    }
    char s[1000];
    while(fgets(s,1000,fp)!=NULL){
        if(i==1){
            for(d=0;d<strlen(s);d++){
                s[i]= tolower(s[i]);
            }
        }
        if(strstr(s,str)!=0){
            if(n==1){
                printf("[%d]%s",j,s);
            }
            else {
                printf("%s",s);
            }
            nr++;
        }
        j++;
    }
    if(c==1){
        printf("Numar total de linii: %d",nr);
    }
    fclose(fp);
}

int main(int argc, char *argv[])
{
    int c,i,n,j;
    c=i=n=0;
    for(j=1;j<argc-2;j++){
        if (strcmp(argv[j], "i") == 0) {
            i=1;
        } else if (strcmp(argv[j], "n") == 0) {
            n=1;
        } else if (strcmp(argv[j], "c") == 0) {
            c=1;
        }
    }
    cautare(argv[argc-2],argv[argc-1],i,c,n);
    return 0;
}

