//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <string.h>

int comparare(char *s1,char *s2){
    if(strcmp(s1,s2)<0)
        return -1;
    return strcmp(s1,s2);
}

int main()
{
    
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    
    int rez=comparare(s1,s2);
    printf("%d \n",rez);

    return 0;
}