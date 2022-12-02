//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void transform(int v[], int n, int x);

int main()
{
    int n, x, v[100];
    scanf("%d%d", &n, &x);
    for (int i = 0;i < n;i++)
        scanf("%d", &v[i]);
    transform(v, n, x);
    for (int i = 0;i < n;i++)
        printf("%d ", v[i]);
    printf("\n");
}

void transform(int v[], int n, int x)
{
    int a = 0, b = n - 1, aux = 0;
    while (a < b)
    {
        while (v[a] < x && a < n)
            a++;
        while (v[b] >= x && b > 0)
            b--;
        if (a < b)
        {
            aux = v[a];
            v[a] = v[b];
            v[b] = aux;
        }
    }

}