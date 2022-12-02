//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void extragere(int *a, int *b, int *n, int m, int *c)
{
    int p = 0;
    for(int i = 0; i < *n; i++)
        for(int j = 0; j < m; j++)
            if(a[i] == b[j])
                c[p++] = a[i];
    *n = p;
}
int main ()
{
    int a[1000], b[1000], c[1000], m, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    extragere(a, b, &n, m, c);
    printf("%d\n", n);
    for(int i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}