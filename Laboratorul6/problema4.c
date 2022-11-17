//
// Created by Eduard Andrei Radu on 10.11.2022.
//


#include <stdio.h>
#include <string.h>

int strcomp(char *s1, char *s2)
{
    for(int i = 0; i < strlen(s1) && i < strlen(s2); i++)
        if(s1[i] > s2[i])
            return 1;
        else if(s1[i] < s2[i])
            return -1;
        if(strlen(s1) > strlen(s2))
            return 1;
        else if(strlen(s1) < strlen(s2))
            return -1;
        else
            return 0;
}
int main ()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d\n", strcomp(s1, s2));
    return 0;
}