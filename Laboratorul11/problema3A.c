//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cautare(char *filename, char *str){
    FILE *fp;
    fp= fopen(filename,"r");
    if (fp == NULL){
        printf("Nu s-a putut deschide fisierul");
    }
    char s[100];
    while(fgets(s,100,fp)!=NULL){
        if(strstr(s,str)!=0){
            printf("%s",s);
        }
    }
    fclose(fp);
}

int main(int argc, char *argv[])
{
    cautare(argv[1],argv[2]);
    return 0;
}
