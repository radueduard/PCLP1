//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
void transform(int v[], int n, int x)
{
    int k1 = 0, k2 = n - 1, i;
    for (i = 0; i < n; i++)
    {
        if (v[i] < x)
        {
            int aux = v[k1];
            v[k1] = v[i];
            v[i] = aux;
            k1++;
        }
    }
}
=======
#include<stdio.h>

>>>>>>> main
int main()
{
    int n, v[101], x, i;
    scanf("%d%d", &n, &x);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    transform(v, n, x);
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}