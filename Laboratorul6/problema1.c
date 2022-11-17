//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void bubblesort(int *, int);
int main()
{
    int v[101], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    bubblesort(v, n);
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}

void bubblesort(int v[], int n)
{
    int ok = 1, i;
    do
    {
        ok = 1;
        for (i = 0; i < n - 1; i++)
            if (v[i] > v[i + 1])
            {
                int aux = v[i + 1];
                v[i + 1] = v[i];
                v[i] = aux;
                ok = 0;
            }
    } while (!ok);
}