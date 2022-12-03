//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
=======
#include<stdio.h>
>>>>>>> main

int compar(char v1[], char v2[])
{
    int i = 0, j = 0;
    while (v1[i] & v2[j])
    {
        if (v1[i] > v2[j]) return 1;
        if (v1[i] < v2[j]) return -1;
        i++;
        j++;
    }
    if (i == j) return 0;
    if (v1[i]) return 1;
    return -1;
}
int main()
{
    char v1[100], v2[100];
    scanf("%s%s", v1, v2);
    printf("%d", compar(v1, v2));
    return 0;
}