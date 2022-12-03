#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* my_replace(char *s, char *s1, char *s2){
    char aux[101];
    char *p;
    p=strtok(s," ");
    while(p){
        if(strcmp(p,s1)==0)
            strcat(aux,s2);
        strcat(aux,p);
        p=strtok(NULL," ");
    }
    strcpy(s,aux);
}

int main(){
    char s1[101],s2[101],s[101];
    fgets(s1,101,stdin);
    fgets(s2,101,stdin);
    fgets(s,101,stdin);
    my_replace(s,s1,s2);
    printf("%s",s);
}