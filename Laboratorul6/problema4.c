//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

int f(char a[], char b[]);

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    printf("%d \n", f(a, b));
}

int f(char a[], char b[])
{
    int n = 0, m = 0, i = 0;
    while (a[n] != '\0')
    {
        n++;
    }

    while (b[m] != '\0')
    {
        m++;
    }

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
        i++;
    }
    if (n > m)
        return 1;
    else
    {
        if (n < m)
            return -1;
        else
            return 0;
    }
}