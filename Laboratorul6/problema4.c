//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <string.h>

int newStrcmp(char s1[], char s2[]) {
    int len, lenS1 = strlen(s1), lenS2 = strlen(s2), dif;
    if(lenS1 < lenS2)
        len = lenS1;
    else len = lenS2;
    for (int i = 0; i < len; i++) {
        dif = s1[i] - s2[i];
        if(dif > 0) return 1;
        else if(dif < 0) return -1;
    }
    if(lenS1 > lenS2) return 1;
    else if(lenS1 < lenS2) return -1;
    else return 0;
}

int main()
{
    char s1[100], s2[100];
    scanf("%s%s", s1, s2);
    printf("%d\n", newStrcmp(s1, s2));
    return 0;
}