//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
=======
#include<stdio.h>
>>>>>>> main

int determina_s(char * a, char * b)
{
    if(strlen(a) == strlen(b))
    {
        for (int i = 0; i < strlen(a); i++)
            if (a[i] < b[i]) return -1;
            else if (a[i] > b[i]) return 1;
        return 0;
    }
    else if(strlen(a) < strlen(b))
    {
        for (int i = 0; i < strlen(a); i++)
            if (a[i] < b[i]) return -1;
            else if (a[i] > b[i]) return 1;
        return -1;
    }
    else
    {
        for (int i = 0; i < strlen(b); i++)
            if (a[i] < b[i]) return -1;
            else if (a[i] > b[i]) return 1;
        return 1;
    }
}

int main() {
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    printf("%d\n", determina_s(a, b));
    return 0;
}