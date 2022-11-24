//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
=======
#include<stdio.h>
>>>>>>> main

int compar(char s1[], char s2[])
{
    int i = 0, j = 0;
    while (s1[i] & s2[j])
    {
        if (s1[i] > s2[j])
            return 1;
        if (s1[i] < s2[j])
            return -1;
        i++;
        j++;
    }
    if (i == j)
        return 0;
    if (s1[i])
        return 1;
    return -1;
}
int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);
    printf("%d", compar(s1, s2));
    return 0;
}