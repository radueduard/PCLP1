//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

int extract(int a[], int b[], int c[], int na, int nb)
{
    int i, j, k = 0;
    for (i = 0; i < na; i++)
        for (j = 0; j < nb; j++)
            if (a[i] == b[j])
            {
                c[k++] = a[i];
            }
    return k;
}

int main()
{
    int a[101], b[101], c[101], na, nb;
    scanf("%d", &na);
    int i;
    for (i = 0; i < na; i++)
        scanf("%d", &a[i]);

    scanf("%d", &nb);
    for (i = 0; i < nb; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < extract(a, b, c, na, nb); i++)
        printf("%d ", c[i]);
    return 0;
}