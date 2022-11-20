//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

int extElem(int a[], int b[], int na, int nb, int c[]) {
    int nc = 0;
    for (int i = 0; i < na; i++)
        for (int j = 0; j < nb; j++)
            if(a[i] == b[j])
                c[nc++] = a[i];
    return nc;
}

int main()
{
    int a[100], na, b[100], nb, c[100], nc;

    scanf("%d",&na);
    for (int i = 0; i < na; i++)
        scanf("%d", &a[i]);

    scanf("%d", &nb);
    for (int i = 0; i < nb; i++)
        scanf("%d", &b[i]);

    nc = extElem(a, b, na, nb, c);

    printf("%d\n", nc);
    for (int i = 0; i < nc; i++)
        printf("%d ", c[i]);
    printf("\n");

    return 0;
}